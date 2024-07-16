/*
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

Name  : Aditya Mahesh Tambe
Student Id: 171969223
Email: amtambe@myseneca.ca
*/
#include "Item.h"
using namespace seneca;
int main() {
   Item A;
   A.setEmpty();
   A.display();
   A.set("Hot dog buns", 4.99, false);
   A.display();
   return 0;
}


/*
Output:
| xxxxxxxxxxxxxxxxxxxx | xxxxxxx | xxx |
| Hot dog buns........ |    4.99 | No  |

*/
