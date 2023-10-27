#include<iostream>
// Define an abstract base class named "Shape."
class Shape {
public:
    virtual void draw() = 0; // Declare a pure virtual function, making Shape an abstract class.
};

// Define a derived class named "Circle" that inherits from the abstract base class "Shape."
class Circle : public Shape {
public:
    // Implement the pure virtual function "draw" in the derived class.
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }
};
