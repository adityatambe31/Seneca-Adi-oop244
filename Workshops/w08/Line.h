/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/

//2024-07-14 Creat this file
//Done on 2024-07-14
//
#ifndef WS8_LINE_H
#define WS8_LINE_H
#include "LblShape.h"

using namespace seneca;
namespace seneca{
    class Line : public LblShape{
        size_t m_length{};
    public:
        Line() = default;
        Line(std::string ,size_t);
        void getSpecs(std::istream &istr) override;
        virtual void draw(std::ostream&) const override;
    };
}
#endif //WS8_LINE_H
