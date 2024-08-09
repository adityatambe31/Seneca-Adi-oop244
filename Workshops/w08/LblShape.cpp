/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
//2024-07-13 Creat this file
//Done on 2024-07-14
#include "LblShape.h"
#include <istream>
using namespace seneca;
using namespace std;
namespace seneca{
    char* LblShape::label() const {
        return m_label;
    }

    LblShape::LblShape(const string label) {
        if(!label.empty()){
            m_label = new char[strlen(label.c_str()) + 1];
            strcpy(m_label,label.c_str());
        }
    }

    LblShape::~LblShape() {
        delete[] m_label;
        m_label = nullptr;
    }

    void LblShape::getSpecs(std::istream& istr){
        char tmp[255];
        istr.getline(tmp,255,',');

        delete[] m_label;
        m_label = new char[strlen(tmp) + 1];
        strcpy(m_label, tmp);
    }
}

