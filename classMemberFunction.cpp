#include<iostream>
using namespace std;

// Define a class named Circle
class Circle
{
private:
    double radius; // Private member variable to store the radius of the circle

public:
    // Public member function to set the radius of the circle
    void setRadius(double r)
    {
        radius = r; // Set the radius to the given value
    }

    // Declare a member function named findArea with an input parameter 'r'
    double findArea(double r);
};

int main()
{
    Circle c1, c2, c3; // Create three Circle objects: c1, c2, and c3
    Circle c4, c5;     // Create two more Circle objects: c4 and c5
    return 0;          // The program returns 0 to indicate successful execution.
}

// Define the member function findArea for the Circle class, which calculates the area of a circle
double Circle::findArea(double r)
{
    return 3.14 * r * r; // Return the area of the circle using the formula A = π * r^2
}
