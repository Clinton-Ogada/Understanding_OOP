#include <iostream>
using namespace std;
class Complex { // Define a class named Complex to represent complex numbers.
private:
    double real; // Private member variable to store the real part of the complex number.
    double imaginary; // Private member variable to store the imaginary part of the complex number.

public:
    Complex operator+(const Complex& other) { // Overload the addition operator (+) for Complex objects.
        Complex result; // Create a Complex object to store the result of the addition.

        // Add the real parts of 'this' Complex object and the 'other' Complex object.
        result.real = real + other.real;

        // Add the imaginary parts of 'this' Complex object and the 'other' Complex object.
        result.imaginary = imaginary + other.imaginary;

        return result; // Return the Complex object that represents the sum of the two complex numbers.
    }
};
