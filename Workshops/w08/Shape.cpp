/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/

//2024-07-13 Creat this file
//Done on 2024-07-14
//
#include <ostream>
#include "Shape.h"
namespace seneca {
    std::ostream& operator<<(std::ostream& os, const Shape& right) {
        right.draw(os);
        return os;
    }
    std::istream& operator>>(std::istream& is, Shape& right) {
        right.getSpecs(is);
        return is;
    }
} // seneca
