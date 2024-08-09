/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
#ifndef SDDS_MOTORVEHICLE_H
#define SDDS_MOTORVEHICLE_H
#include <iostream>
#include <cstring>
#include <iomanip>

namespace seneca {

    class MotorVehicle {
        char plate_[9];
        char address_[64];
        int year_;

    public:
        MotorVehicle(const char* plate, int year);
        void moveTo(const char* address);

        std::ostream& write(std::ostream& os) const;
        std::istream& read(std::istream& is);

        friend std::ostream& operator<<(std::ostream& os, const MotorVehicle& mv);
        friend std::istream& operator>>(std::istream& is, MotorVehicle& mv);
    };
}

#endif

