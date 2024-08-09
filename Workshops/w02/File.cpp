/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace seneca {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }


    bool read(char empName[])
   {
      int read = fscanf(fptr, "%[^\n]\n", empName);
      return read == 1;
   }

   bool read(int &empNumber)
   {
      int read = fscanf(fptr, "%d,", &empNumber);
      return read == 1;
   }

   bool read(double &empSalary)
   {
      int read = fscanf(fptr, "%lf,", &empSalary);
      return read == 1;
   }
}