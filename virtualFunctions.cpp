// Define a base class named "Shape."
class Shape {
public:
    // Declare a virtual function named "draw" in the Shape class.
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl; // Output a generic message for drawing a shape.
    }
};

// Define a derived class named "Circle" that inherits from the base class "Shape."
class Circle : public Shape {
public:
    // Override the "draw" function from the base class.
    void draw() override {
        std::cout << "Drawing a circle." << std::endl; // Output a specific message for drawing a circle.
    }
};
