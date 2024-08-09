/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
#ifndef SENECA_ACCOUNT_H_
#define SENECA_ACCOUNT_H_
#include <iostream>

namespace seneca {
   class Account 
   {
      int m_number;
      double m_balance; 
      void setEmpty();
      //declaring the  function..
      void setInvalidEmpty();

      bool isInvalidEmpty() const;
      bool isNew() const;
      bool isValid() const;
      bool isValidAccNumber(int accNumber) const;


   public:
      Account();
      Account(int number, double balance);
      std::ostream& display()const;

      //declaring the  function..

      /*type conversion operators
         -operator bool
         returns true if the account is valid and otherwise false. This operator can not modify the account object.
         
         -operator int
         returns the account number. This operator can not modify the account object.
         
         -operator double
         returns the balance value. This operator can not modify the account object.*/
            operator bool() const;
            operator int() const;
            operator double() const;

      /*Unary member operator
      bool operator ~()
      This operator returns true is the account is new or not set (i.e. if the account number is zero), otherwise it will return false. This operator can not modify the account object.*/

            bool operator ~() const;

            Account &operator=(int accNumber);
            Account &operator=(Account &acc);
            
            //overload the += operator to add a double value to an account. 
            Account &operator+=(double money);

            //overload the -= operator to reduce an account balance by a double value .
            Account &operator-=(double money);

            //overload the << operator (left shift operator) to move funds from the right account to the left.
            Account &operator<<(Account &acc);

            //overload the >> operator (right shift operator) to move funds from the left account to the right. 
            Account &operator>>(Account &acc);


            //A class definition that grants friendship to a helper function allows that function to alter the values of its private data members. Granting friendship pierces encapsulation.
            friend double operator+(const Account &acc1, const Account &acc2);
            friend double operator+=(double &money, const Account &acc);
   };
   
   
}
#endif // SENECA_ACCOUNT_H_