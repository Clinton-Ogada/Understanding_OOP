#include <iostream>

// Base class
class Shape {
public:
    virtual void display() { // Base class function for displaying a shape
        std::cout << "This is a shape." << std::endl;
    }
};

// Derived class overriding the display() function
class Circle : public Shape {
public:
    void display() override { // Derived class function overriding the base class function
        std::cout << "This is a circle." << std::endl;
    }
};

// Another derived class overriding the display() function
class Square : public Shape {
public:
    void display() override { // Derived class function overriding the base class function
        std::cout << "This is a square." << std::endl;
    }
};

int main() {
    Shape* shape1 = new Circle(); // Create a Circle object and assign it to a pointer of type Shape
    Shape* shape2 = new Square(); // Create a Square object and assign it to a pointer of type Shape

    shape1->display();  // Calls the display() method of Circle (dynamic polymorphism)
    shape2->display();  // Calls the display() method of Square (dynamic polymorphism)

    delete shape1; // Deallocate memory for the Circle object
    delete shape2; // Deallocate memory for the Square object

    return 0;
}
