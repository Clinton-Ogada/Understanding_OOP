#include <iostream>
#include <string>

// Base class for vehicles
class Vehicle {
public:
    Vehicle(const std::string& make, const std::string& model) : make(make), model(model) {}

    void displayInfo() {
        std::cout << "Make: " << make << ", Model: " << model << std::endl;
    }

private:
    std::string make;
    std::string model;
};

// Single Inheritance
class Car : public Vehicle {
public:
    Car(const std::string& make, const std::string& model, int doors)
        : Vehicle(make, model), numDoors(doors) {}

    void displayCarInfo() {
        displayInfo(); // Inheriting the base class's functionality
        std::cout << "Number of doors: " << numDoors << std::endl;
    }

private:
    int numDoors;
};

// Multiple Inheritance
class ElectricVehicle {
public:
    ElectricVehicle(int batteryCapacity) : batteryCapacity(batteryCapacity) {}

    void displayElectricInfo() {
        std::cout << "Battery Capacity: " << batteryCapacity << " kWh" << std::endl;
    }

private:
    int batteryCapacity;
};

class ElectricCar : public Car, public ElectricVehicle {
public:
    ElectricCar(const std::string& make, const std::string& model, int doors, int batteryCapacity)
        : Car(make, model, doors), ElectricVehicle(batteryCapacity) {}

    void displayElectricCarInfo() {
        displayCarInfo(); // Inheriting from the Car class
        displayElectricInfo(); // Inheriting from the ElectricVehicle class
    }
};

int main() {
    // Single Inheritance Example
    Car myCar("Toyota", "Camry", 4);
    std::cout << "Single Inheritance Example:" << std::endl;
    myCar.displayCarInfo();

    // Multiple Inheritance Example
    ElectricCar myElectricCar("Tesla", "Model 3", 4, 75);
    std::cout << "\nMultiple Inheritance Example:" << std::endl;
    myElectricCar.displayElectricCarInfo();

    return 0;
}
