/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
#include "Truck.h"
#include <algorithm> 

namespace seneca {

    Truck::Truck(const char* plate, int year, double capacity, const char* address)
        : MotorVehicle(plate, year), capacity_(capacity), cargo_(0) {
        moveTo(address);
    }

    bool Truck::addCargo(double cargo) {
        if (cargo_ < capacity_) {  // Check if there's space left
            cargo_ = std::min(cargo_ + cargo, capacity_);
            return true;
        }
        return false;
    }

    bool Truck::unloadCargo() {
        if (cargo_ > 0) {
            cargo_ = 0;
            return true;
        }
        return false;
    }

    std::ostream& Truck::write(std::ostream& os) const {
        MotorVehicle::write(os);
        os << " | " << cargo_ << "/" << capacity_;
        return os;
    }

    std::istream& Truck::read(std::istream& is) {
        MotorVehicle::read(is);
        std::cout << "Capacity: ";
        is >> capacity_;
        std::cout << "Cargo: ";
        is >> cargo_;
        return is;
    }

    std::ostream& operator<<(std::ostream& os, const Truck& truck) {
        return truck.write(os);
    }

    std::istream& operator>>(std::istream& is, Truck& truck) {
        return truck.read(is);
    }

}

