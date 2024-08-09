/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
#ifndef SENECA_ITEM_H_
#define SENECA_ITEM_H_
#define TAX_RATE 0.13 //define a constant double value for this tax rate
#define MAX_NAME_LEN 20
namespace seneca {
   class Item {
      char m_itemName[MAX_NAME_LEN + 1];
      double m_price;
      bool m_taxed;
      void setName(const char* name);
   public:
      void setEmpty();
      void set(const char* name, double price, bool taxed);
      void display()const;
      bool isValid()const;
      double price()const;
      double tax()const;
   };
}

#endif // !SENECA_SUBJECT_H
