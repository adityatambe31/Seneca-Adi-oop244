/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/

#ifndef SDDS_TRUCK_H
#define SDDS_TRUCK_H
#include "MotorVehicle.h"

namespace seneca {

    class Truck : public MotorVehicle {
        double capacity_;
        double cargo_;

    public:
        Truck(const char* plate, int year, double capacity, const char* address);

        bool addCargo(double cargo);
        bool unloadCargo();

        std::ostream& write(std::ostream& os) const;
        std::istream& read(std::istream& is);

        friend std::ostream& operator<<(std::ostream& os, const Truck& truck);
        friend std::istream& operator>>(std::istream& is, Truck& truck);
    };
}

#endif

