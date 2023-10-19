#include <iostream>
using namespace std;

// Define a base class named ANIMAL
class ANIMAL {
public:
    char anmType;  // Character array to store the type of the animal.
    double uzito;     // Double variable to store the weight of the animal.
    double kimo;      // Double variable to store the height of the animal.
    int umri;         // Integer variable to store the age of the animal.

    // Member functions (methods) for ANIMAL
    void kula();      // Method to simulate eating.
    void reproduce(); // Method to simulate reproduction.
    void tembea();    // Method to simulate walking.
};

// Define a derived class named MAMMAL, inheriting from ANIMAL
class MAMMAL : public ANIMAL {
private:
    int nyonyongapi;   // Private member variable to store the number of mammary glands.

public:
    // Member functions (methods) for MAMMAL
    void zaa();     // Method to simulate giving birth.
    void nyonya() {cout"suckles the young ones. Enter number of teats:\t"};
//    cin>>nyonyongapi};// Method to simulate breastfeeding.

    // MAMMAL class inherits the members (attributes and behaviors) of the ANIMAL class.
};

int main() {
    cout<<"KARIBUNI SANA KWENYE ULIMWENGU WA VIUMBE HAI NA WANYONYAO";
    cout<<"\n       \n";
    MAMMAL panya1;
    panya1.nyonya();
    panya1.anmType = 'R';
    panya1.uzito = 0.25;
    panya1.umri = 3;
    cout<<"The first Mammal: panya1\n";
   // cout<<"No. of teats:"<<panya1.nyonyongapi<<endl;
    cout<<"age"<<panya1.umri<<endl;
    cout<<"weight:"<<panya1.uzito<<endl;
    cout<<"Creature Type:"<<panya1.anmType<<endl;
    cout<<"\n\n";
    return 0;  // The program returns 0, indicating successful execution.

}
