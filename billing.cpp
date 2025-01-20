#include <iostream>
#include "billing.h"

using namespace std;

double totalBill = 0.0; // Global variable to store the total bill

// Calculates and stores the bill details
void printBill() {
    // Example calculation (you can customize this logic)
    double cabCharges = 500.0; // Example cab charge
    double hotelCharges = 1500.0; // Example hotel charge
    totalBill = cabCharges + hotelCharges;

    cout << "Bill has been calculated and stored.\n";
}

// Displays the bill details
void showBill() {
    if (totalBill == 0.0) {
        cout << "No bill has been generated yet. Please calculate the bill first.\n";
    } else {
        cout << "\n------- Customer Bill -------\n";
        cout << "Cab Charges: $500\n";
        cout << "Hotel Charges: $1500\n";
        cout << "-----------------------------\n";
        cout << "Total Bill: $" << totalBill << endl;
    }
}

