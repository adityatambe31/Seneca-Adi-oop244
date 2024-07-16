/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
#include "MotorVehicle.h"

namespace seneca {

    MotorVehicle::MotorVehicle(const char* plate, int year) : year_(year) {
        strncpy(plate_, plate, 8); // Copy up to 8 characters + null terminator
        plate_[8] = '\0';
        strcpy(address_, "Factory");
    }

void MotorVehicle::moveTo(const char* address) {
    if (strcmp(address_, address) != 0) {
        std::cout << "|" << std::setw(8) << std::right << plate_ << "| |"
                  << std::setw(20) << std::right << address_ << " ---> "
                  << std::setw(20) << std::left << address << "|" << std::endl;
        strncpy(address_, address, 63);
        address_[63] = '\0';
    }
}


    std::ostream& MotorVehicle::write(std::ostream& os) const {
        return os << "| " << year_ << " | " << plate_ << " | " << address_;
    }

    std::istream& MotorVehicle::read(std::istream& is) {
        std::cout << "Built year: ";
        is >> year_;
        std::cout << "License plate: ";
        is >> plate_;
        std::cout << "Current location: ";
        is.ignore(); // Ignore newline from previous input
        is.getline(address_, 64);
        return is;
    }

    std::ostream& operator<<(std::ostream& os, const MotorVehicle& mv) {
        return mv.write(os);
    }

    std::istream& operator>>(std::istream& is, MotorVehicle& mv) {
        return mv.read(is);
    }

}

