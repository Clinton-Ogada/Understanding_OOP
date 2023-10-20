#include <iostream>  // Include the input/output stream library for console input and output.

using namespace std;  // Use the standard namespace for convenience.

class STUDENT {  // Define a class named STUDENT.
public:
    char regNo[6];  // Character array to store the registration number of the student.
    char jina[12];  // Character array to store the name of the student.
    int umri;       // Integer variable to store the age of the student.
    char maritalStat;  // Character variable to store the marital status of the student.

    // Member function (method) to get student details.
    void getDetails() {
        cout << "Enter the registration number of the student:\t";
        cin >> regNo;
        cout << "Enter the name of the student:\t";
        cin >> jina;
        cout << "Enter the age of the student:\n";
        cin >> umri;
        cout << "Enter the marital state of the student:\t";
        cin >> maritalStat;
        cout << endl << endl;
    }

    // Member function (method) to display student details.
    void showDetails() {
        cout << "STUDENT DETAILS\n   \n";
        cout << "Registration No.:\t" << regNo << endl;
        cout << "Age: " << umri << endl;
        cout << "Marital State: " << maritalStat << endl;
        cout << "\n    \n\n";
    }
} S2, S5, S4;  // Declaring static objects of the STUDENT class.

int main() {
    STUDENT S1;  // Declare an object of the STUDENT class.
    STUDENT S8, S3;  // Declare two more objects of the STUDENT class.

    cout << "Karibuni Sana\n \n\tkwenye ulimwengu wa KSTVET\n";
    cout << "Kuna viumbe mbalimbali ikiwemo STUDENTS" << endl;

    S8.getDetails();  // Call the getDetails() method to capture details for the S8 student.
    S8.showDetails();  // Call the showDetails() method to display details for the S8 student.

    return 0;  // The program returns 0, indicating successful execution.
}
