/*
*****************************************************************************
                              milestone - 5
Full Name  : Aditya Mahesh Tambe
Student ID#: 171969223
Email      : amtambe@myseneca.ca

Authenticity Declaration:
 I have done all the coding by myself and only copied the code that my professor
 provided to complete my project milestones.
*****************************************************************************
*/


#ifndef SDDS_STREAMABLE_H_
#define SDDS_STREAMABLE_H_

#include<iostream>
using namespace std;

namespace sdds {
	class Streamable{
        
	public:
        
        virtual ostream& write(std::ostream& os) const = 0;// write receives and returns a reference of an ostream object.
        virtual istream& read(std::istream& is) = 0;//read receives and returns a reference of an istream object.
        virtual bool conIO(std::ios& io) const = 0;//conIo receives a reference of an ios object and returns a Boolean.
        virtual operator bool() const = 0;
		~Streamable(){};
	};


}
#endif
