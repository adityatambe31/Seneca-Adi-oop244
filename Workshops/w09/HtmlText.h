/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
#ifndef SENECA_HTMLTEXT_H__
#define SENECA_HTMLTEXT_H__
#include "Text.h"
namespace seneca {
   class HtmlText :  public Text {
      char* m_title{};
      void copyTitle(const char*);
   public:
      HtmlText(const char* filename=nullptr, const char* title = nullptr);

        virtual void write(std::ostream& os)const;
        //rule of three
        HtmlText(HtmlText&);
        virtual ~HtmlText();
        HtmlText& operator=(const HtmlText&);
   };
}
#endif // !SENECA_HTMLTEXT_H__
