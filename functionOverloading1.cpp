#include <iostream> // Include the input/output stream library to use cout and other standard functions.
using namespace std; // Use the standard namespace to access C++ standard functions.

class Calculator { // Define a class named Calculator.
public:
    int add(int a, int b) { // Define a member function named 'add' that takes two integer parameters 'a' and 'b'.
        return a + b; // Return the result of adding 'a' and 'b'.
    }

    double add(double a, double b) { // Define another member function named 'add' that takes two double parameters 'a' and 'b'.
        return a + b; // Return the result of adding 'a' and 'b'.
    }
};
