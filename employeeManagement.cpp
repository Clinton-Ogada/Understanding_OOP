#include <iostream>
using namespace std;

class Employee {
private: // Private members are not accessible outside the class
    char eName[40];
    char empNo[12];
    int age;
    double eSalo;

public: // Public members are accessible outside the class
    void getEName();
    void changeEName();
    void reviewESalary(); // Changed the return type to void
    double setESalary();
};

// Member function definitions outside the class
void Employee::getEName() {
    // Add code to get employee name
    cout << "Enter employee name: ";
    cin >> eName;
}

void Employee::changeEName() {
    // Add code to change employee name
    cout << "Enter new name: ";
    cin >> eName;
}

void Employee::reviewESalary() {
    // Add code to review and update employee salary
    cout << "Enter new salary for the employee: ";
    cin >> eSalo;
}

double Employee::setESalary() {
    // Add code to set employee salary
    // You can return a new salary or update eSalo here
    return eSalo;
}

int main() {
    Employee erik, betty;
    
    // Call member functions on erik and betty objects
    erik.getEName();
    erik.reviewESalary();
    erik.setESalary();
    
    betty.getEName();
    betty.reviewESalary();
    betty.setESalary();
    
    return 0;
}
