#include <iostream>  // Include the input/output stream library for console input and output.
using namespace std;  // Use the standard namespace for convenience.

class ANIMAL {  // Define a class named ANIMAL.
public:
    char anType[20];  // Character array to store the type of the animal.
    double uzito;    // Double variable to store the weight of the animal.
    double kimo;     // Double variable to store the height of the animal.
    int umri;         // Integer variable to store the age of the animal.

    void getData();    // Declaration of a member function (method) to get data about the animal.
    void showData();   // Declaration of a member function (method) to display data about the animal.

    ANIMAL() {  cout<<"Kiumbe wa Mungu. Karibu sana hapa dunia\n"; // Constructor function for the ANIMAL class. It is executed when an object is created.
        // The constructor is currently empty, and no specific initialization is performed here.
    }

    ~ANIMAL() { cout<<"Kiumbe wa Mungu, R.I.P\n"; // Destructor function for the ANIMAL class. It is executed when an object is destroyed.
        // The destructor is also empty in this case, and no specific cleanup is performed here.
    }
} panya1, paka1, ndovu1;  // Create three ANIMAL static objects: panya1, paka1, and ndovu1.

int main() {  // The main function, the entry point of the program.
    ANIMAL kuku1,panya2;//Create two ANIMAL dynamic objects
    panya1.umri =5;
    panya1.uzito = 0.25;
    cout<<"\n\n";
    return 0;  // The program returns 0, indicating successful execution.
}
