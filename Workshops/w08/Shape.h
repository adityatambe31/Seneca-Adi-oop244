/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/

//2024-07-13 Creat this file
//Done on 2024-07-14

#ifndef WS8_SHAPE_H
#define WS8_SHAPE_H
#include <ostream>
#include <istream>
#include <cstring>

namespace seneca {
    class Shape {
    public:
    virtual void draw(std::ostream&) const = 0;
    virtual void getSpecs(std::istream&) = 0;
    virtual ~Shape() = default;
    };
    std::ostream &operator<<(std::ostream &os, const Shape& right);
    std::istream &operator>>(std::istream &is, Shape& right);

} // seneca

#endif //WS8_SHAPE_H
