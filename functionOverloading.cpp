#include <iostream>

// Define a class named MathOperations
class MathOperations {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    // Create an instance of the MathOperations class
    MathOperations math;

    // Call the add function with two integers, uses the int version of add
    int result1 = math.add(5, 3);

    // Call the add function with two doubles, uses the double version of add
    double result2 = math.add(2.5, 3.7);

    // Display the results
    std::cout << "Result 1: " << result1 << std::endl; // Output the result of the int addition
    std::cout << "Result 2: " << result2 << std::endl; // Output the result of the double addition

    return 0;
}
