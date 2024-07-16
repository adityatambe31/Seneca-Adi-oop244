/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
#include <iostream>
#include <cstring>
#include "Item.h"
using namespace std;
namespace seneca {

            void Item::setName(const char* name){

                if(name[0] != '\0')
                {
                    if (strlen(name) <= MAX_NAME_LEN)
                    {
                        strcpy(m_itemName, name);
                    }
                    else {
                        strncpy(m_itemName, name, MAX_NAME_LEN);
                        m_itemName[MAX_NAME_LEN] = '\0';
                    }
                }
            }

            void Item:: setEmpty(){

                m_itemName[0]='\0';
                m_price=0.0;
                m_taxed = false;
            }

            void Item::set(const char* name, double price, bool taxed) {
                
                if(price < 0 || name =='\0')
                {
                    setEmpty();
                }

                else
                {
                    setName(name);
                    m_price=price;
                    m_taxed=taxed;
                }
            }

            bool Item::isValid() const 
            {
                if (m_itemName[0] != '\0' && m_price > 0.0){
                        return true;
                    }
                return false;
            }

            double Item::price() const {
                return m_price;
            }

            double Item::tax() const {
                if (m_taxed)
                {
                    return m_price * TAX_RATE;
                }
                else{
                    return 0.0;
                }
            }

            void Item::display()const{
                if(isValid())
                {
                    cout << "| ";
                    cout.width(20);
                    cout.fill('.'); // padded with '.' (dots)
                    cout << left << m_itemName;
                    
                    cout << " | ";
                    cout.width(7);
                    cout.fill(' ');
                    cout << fixed;
                    cout.precision(2);
                    cout << right << m_price;
                    cout << " | ";

                    cout << (m_taxed ? "Yes" : "No ") << " |" << endl; //short hand if else or can useful.
                }

                else{
                        cout << "| xxxxxxxxxxxxxxxxxxxx | xxxxxxx | xxx |"<< endl;
                }
            }
}