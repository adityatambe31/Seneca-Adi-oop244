/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/

//2024-07-14 Creat this file
//Done on 2024-07-14
//
#ifndef WS8_RECTANGLE_H
#define WS8_RECTANGLE_H
#include "LblShape.h"

using namespace seneca;
namespace seneca{
    class Rectangle : public LblShape{
        size_t m_height{};
        size_t m_width{};
    public:
        Rectangle()=default;
        Rectangle(std::string,size_t ,size_t);
        void getSpecs(std::istream &istr) override;
         void draw(std::ostream&) const override;
    };
}
#endif //WS8_RECTANGLE_H
