#include <iostream>

class Person {
public:
    // Default Constructor
    Person() {
        name = "John Doe"; // Set the default name
        age = 30;         // Set the default age
    }

    // Parameterized Constructor
    Person(std::string n, int a) {
        name = n;  // Set the name from the parameter
        age = a;   // Set the age from the parameter
    }

    // Copy Constructor
    Person(const Person& other) {
        name = other.name; // Copy the name from the other object
        age = other.age;   // Copy the age from the other object
    }

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name; // Member variable to store the name
    int age;         // Member variable to store the age
};

int main() {
    // Using the Default Constructor
    Person person1; // Create a Person object using the default constructor
    std::cout << "Person 1 (Default Constructor): ";
    person1.displayInfo(); // Display the information of person1

    // Using the Parameterized Constructor
    Person person2("Alice", 25); // Create a Person object using the parameterized constructor
    std::cout << "Person 2 (Parameterized Constructor): ";
    person2.displayInfo(); // Display the information of person2

    // Using the Copy Constructor
    Person person3 = person2; // Create a new Person object (person3) by copying person2
    std::cout << "Person 3 (Copy Constructor): ";
    person3.displayInfo(); // Display the information of person3

    return 0;
}
