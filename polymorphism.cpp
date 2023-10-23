#include <iostream>

// Define a base class named Shape
class Shape {
public:
    // Declare a virtual function draw() for drawing shapes (generic implementation)
    virtual void draw() {
        std::cout << "Drawing a generic shape" << std::endl;
    }
};

// Define a derived class named Circle, inheriting from Shape
class Circle : public Shape {
public:
    // Override the draw() function to provide a specific implementation for circles
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

// Define another derived class named Square, also inheriting from Shape
class Square : public Shape {
public:
    // Override the draw() function to provide a specific implementation for squares
    void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {
    // Create a pointer to a Shape object and assign it an instance of Circle
    Shape* shape1 = new Circle();

    // Create another pointer to a Shape object and assign it an instance of Square
    Shape* shape2 = new Square();

    // Call the draw() method for shape1 (which is a Circle)
    shape1->draw(); // Calls the draw method of Circle

    // Call the draw() method for shape2 (which is a Square)
    shape2->draw(); // Calls the draw method of Square

    // Delete the dynamically allocated objects to free memory
    delete shape1;
    delete shape2;

    return 0;
}
