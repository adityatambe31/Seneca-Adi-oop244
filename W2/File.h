/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/

#ifndef SENECA_FILE_H_
#define SENECA_FILE_H_
namespace seneca {
   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();

   // TODO: Declare read prototypes
   bool read(char eName[]);

   bool read(int &eNumber);

   bool read(double &eSalary);

}
#endif // !SENECA_FILE_H_
