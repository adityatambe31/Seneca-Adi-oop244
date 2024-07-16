// Introduction: This program demonstrates essential C++ concepts

/*
Foundations:
This section includes basic input/output, variables, data types, constants, and functions.
*/

// Include necessary headers
#include <iostream> // For standard input and output
#include <string>   // For string manipulation
using namespace std; // Use the standard namespace

// 1. Basic Input/Output
int main() {
    // Output a string to the console
    cout << "Hello, C++!" << endl;

    // Variables and Data Types
    int age = 25; // Integer variable
    double height = 5.9; // Double variable for floating-point numbers
    char grade = 'A'; // Character variable
    string name = "Alice"; // String variable

    // Constants
    const double PI = 3.14159; // Constant value

    // Functions
    // Declare and define a function
    double calculateCircleArea(double radius) {
        return PI * radius * radius; // Area of a circle formula
    }
    // Call the function
    double area = calculateCircleArea(3.0);
    cout << "Area of circle: " << area << endl;

    /*
    Encapsulation:
    Encapsulation involves bundling the data and methods that operate on the data within one unit, like a class.
    */

    // Define a class
    class Person {
    private:
        string name; // Private attribute
        int age; // Private attribute

    public:
        // Constructor
        Person(string n, int a) : name(n), age(a) {}

        // Public method
        void displayInfo() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
    };

    // Create an object of the class
    Person person1("Alice", 25);
    person1.displayInfo();

    /*
    Inheritance:
    Inheritance allows a class to inherit properties and behavior from another class.
    */

    // Define a derived class
    class Student : public Person {
    private:
        char grade;

    public:
        // Constructor
        Student(string n, int a, char g) : Person(n, a), grade(g) {}

        // Overridden method
        void displayInfo() {
            Person::displayInfo();
            cout << "Grade: " << grade << endl;
        }
    };

    // Create an object of the derived class
    Student student1("Bob", 20, 'A');
    student1.displayInfo();

    /*
    Polymorphism:
    Polymorphism allows methods to do different things based on the object it is acting upon.
    */

    // Polymorphism via method overriding
    Person* personPtr = &student1;
    personPtr->displayInfo(); // Calls Student's displayInfo due to polymorphism

    /*
    Refinements:
    Refinements include advanced C++ features like namespaces.
    */

    namespace first {
        void sayHello() {
            cout << "Hello from first namespace!" << endl;
        }
    }

    namespace second {
        void sayHello() {
            cout << "Hello from second namespace!" << endl;
        }
    }

    // Use the namespaces
    first::sayHello();
    second::sayHello();

    /*
    Appendices:
    Additional useful information, such as commenting techniques.
    */

    // Single-line comment example
    cout << "This is a single-line comment example" << endl;

    /*
    Multi-line comment example
    Comments help explain the code and make it more readable
    */

    return 0; // End of the main function
}
