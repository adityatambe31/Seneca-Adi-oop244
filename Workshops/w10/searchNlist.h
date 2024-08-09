/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/

#ifndef SENECA_SEARCHNLIST_H_
#define SENECA_SEARCHNLIST_H_

#include <iostream>
#include "Collection.h"

namespace seneca {
   // search function template
   // Requirements:
   // - T1 must support the '==' operator for comparison with T2
   // - Collection<T1> must support the add method
   template <typename T1, typename T2>
   bool search(Collection<T1>& collection, const T1 array[], int size, const T2& key) {
      bool found = false;
      for (int i = 0; i < size; ++i) {
         if (array[i] == key) {
            collection.add(array[i]);
            found = true;
         }
      }
      return found;
   }

   // listArrayElements function template
   // Requirements:
   // - T must support the insertion operator '<<' for ostream
   template <typename T>
   void listArrayElements(const char* title, const T array[], int size) {
      std::cout << title << std::endl;
      for (int i = 0; i < size; ++i) {
         std::cout << (i + 1) << ": " << array[i] << std::endl;
      }
   }
}

#endif // !SENECA_SEARCHNLIST_H_

