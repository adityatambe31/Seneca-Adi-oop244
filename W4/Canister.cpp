/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
#define _CRT_SECURE_NO_WARNINGS
#include <istream>
#include <iomanip>
#include <cstring>
#include "Canister.h"
using namespace std;
namespace seneca {

        const double PI = 3.14159265;  // (a global constant double value created in Canister.cpp)


        Canister:: Canister()
        {
            setToDefault();
        }
        
        // one argument Constructor 
        //Sets the attributes to their default values (note: reuse code) Sets the name to the incoming contentName argument.

        Canister:: Canister(const char* contentName){
                setToDefault();
                setName(contentName);
        }

        //Sets the attributes to their default values.
        Canister::Canister(double height, double diameter,
                       const char *contentName)
        {
            setToDefault();
            setName(contentName);


            
            if(height >= 10.f && height <= 40.0f && diameter >= 10.0f && diameter <= 30.0f)
            {
                m_height = height;
                m_diameter = diameter;    
            }

            else{
                m_usable = false;
            }
        }

        Canister ::~Canister(){

            if(m_contentName != nullptr)
            {
                delete[] m_contentName;
                m_contentName = nullptr;
            }
        }

        /*This function sets the attributes to their default values. 
        It sets the content name pointer to null, height to 13.0, diameter to 10.0, 
        content volume to 0.0 and usable flag to true.*/

        /*
            If the dimensions are within acceptable values:

            it will set the m_height and m_diameter to the corresponding argument values
            it will set the content volume to 0.
            it will set the content name to the corresponding argument value.*/

        void Canister:: setToDefault()
        {
            m_contentName = nullptr;
            m_height = 13.0f;
            m_diameter = 10.0f;
            m_contentVolume = 0.0f;
            m_usable = true;
        }

        bool Canister::isEmpty()const{

            return m_contentVolume < 0.00001f;

        }

        /*Compares the content name of this Canister with the one received from the argument C. 
        Compare the two content names using strcmp*/
        bool Canister::hasSameContent(const Canister& C)const{

            return strcmp(m_contentName, C.m_contentName);

        }

        void Canister::setName(const char* Cstr){
            
            /*If the incoming Cstr is not null and the Canister is usable, 
            it will delete the current content name, allocate memory to the length of Cstr (+1 for null) 
            and copies the Cstr into the newly allocated memory.*/
            if(Cstr != nullptr && m_usable)
            {
                if(m_contentName != nullptr)
                {
                    delete[] m_contentName;
                }

                m_contentName = new char [strlen(Cstr) + 1];
                strcpy(m_contentName, Cstr);
            }
        }

        void Canister::clear()
        {

            /*
            Clears an unusable Canister back to an empty Canister by:
            deallocating the memory pointed by the content name attribute
            sets the content name attribute to nullptr
            sets the content volume attribute to 0.0
            set the usable flag attribute to true
            */
            if(m_contentName !=nullptr)
            {
            delete[] m_contentName;
            m_contentName = nullptr;    
            }

            m_contentVolume = 0.0f;
            m_usable = true;

        }

        double Canister::capacity()const{

            //returns the capacity as stated in Calculating the capacity
            /*
            PI: 3.14159265  (a global constant double value created in Canister.cpp)
            H: Height
            D: Diameter
            Capacity = PI x (H - 0.267) x (D/2) x (D/2)
            */
           return PI * (m_height - 0.267) * (m_diameter/2) * (m_diameter/2);
        }

        double Canister::volume()const{

            //returns the content volume attribute
            return m_contentVolume;
        }

        Canister &Canister::setContent(const char* contentName){

            //If the contentName argument is null it will render the Canister unusable
            if(contentName == nullptr)
            {
                m_usable = false;
            }

            //else if the Canister is empty it will set the name to the value pointed by the argument
            else if(isEmpty())
            {
                setName(contentName);
            }

            //else if the name of the Canister is not the same as the contentName argument
            else if (strcmp(contentName, m_contentName) != 0)
            {
                m_usable = false;
            }

            // It will set the Content name of the canister using the following rule and then returns the reference of the current object (i.e. *this):
            return *this;
        }

        Canister &Canister::pour(double quantity){
            
            /*
            If the Canister is usable and the quantity is more than zero and 
            if the sum of the quantity and the volume() is less than or equal to the capacity()
            */
            if(quantity && m_usable > 0 )
            {
                if(quantity && volume() <= capacity())
                {
                    //add the quantity to the content volume
                    m_contentVolume += quantity;
                }
            }

            //otherwise set usable flag attribute to false.
            else
            {
                m_usable = false;
            }

            return *this;
        }

        Canister& Canister::pour(Canister& C){

            //Set the content name to the Canister argument using setContent().
            setContent(m_contentName);

            /*
            if the volume() of the argument is greater than the capacity() minus the volume()
            Reduce the content volume of the argument by capacity() minus volume() */
            if(C.volume() > (C.capacity() - C.volume()))
            {
                C.m_contentVolume -=  (C.capacity() - C.volume());

                //then set the content volume to capacity()
                m_contentVolume = capacity();
            }

            //else pour the content volume of the argument using pour()
            else{
                pour(C.m_contentVolume);

                //set the content volume of the argument to 0.0.
                C.m_contentVolume == 0.0f;
            }

        }

        std::ostream &Canister::display()const{

            cout.width(7);
            cout.precision(1);
            
            cout << fixed << capacity();

            cout << "cc (" << m_height << "x" << m_diameter << ") Canister";

            //if unusable:
            if(!m_usable)
            {
                cout << " of Unusable content, discard!" << endl;
            }

            //otherwise, if the content name is not null
            else if (m_contentName != nullptr)
            {
                
                cout << " of "; 
                
                cout.width(7);
                cout << volume();

                cout << "cc   " << m_contentName;
            }
            //returns the cout
            return cout;
        }
}