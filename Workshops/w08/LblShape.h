/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
//2024-07-13 Creat this file
//Done on 2024-07-14

#ifndef WS8_LBLSHAPE_H
#define WS8_LBLSHAPE_H
#include "Shape.h"

namespace seneca {
    class LblShape:public Shape {
        char* m_label{};
    protected:
        char* label()const;
    public:
        LblShape() = default;
        LblShape(const std::string);
        virtual ~LblShape();
        void getSpecs(std::istream &istr);
    };

}
#endif //WS8_LBLSHAPE_H
