#include "cab_management.h"
#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct CabBooking {
    string customerName;
    int day;
    float cost;
};

queue<CabBooking> pendingRequests;

    float cabCost = 0;
// cab management system with file saving
void cabManagement() {
    int choice;
    while (true) {
        cout << "\n------Cab Management------\n";
        cout << "1. Add Cab Booking Request\n";
        cout << "2. Process Cab Booking\n";
        cout << "3. View Pending Cab Requests\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        system("CLS");

        switch (choice) {
        case 1: {
            string customerName;
            int day;
            float cost;
            cout << "Enter customer name: ";
            cin.ignore();
            getline(cin, customerName);
            cout << "Enter the number of days: ";
            cin >> day;
            cost = day * 2500; // Assuming standard rate
            cabCost = cost;
            CabBooking newBooking = {customerName, day, cost};
            pendingRequests.push(newBooking); // Add the new booking to the queue
            cout << "Cab Booking Request Added: " << cost <<" ETB.\n";
            break;
        }
        case 2: {
            if (pendingRequests.empty()) {
                cout << "No pending cab bookings to process.\n";
            } else {
                CabBooking bookingToProcess = pendingRequests.front();  // Get the first pending booking
                pendingRequests.pop();  // Remove it from the queue
                cout << "Processing cab booking for: " << bookingToProcess.customerName << endl;
                cout << "Total cost: " << bookingToProcess.cost <<" ETB.\n";
            }
            break;
        }
        case 3: {
            if (pendingRequests.empty()) {
                cout << "No pending cab requests.\n";
            } else {
                cout << "Pending Cab Booking Requests:\n";
                queue<CabBooking> tempQueue = pendingRequests;  // Use a temporary queue to display requests
                while (!tempQueue.empty()) {
                    CabBooking booking = tempQueue.front();
                    tempQueue.pop();
                    cout << "Customer: " << booking.customerName << ", Days: " << booking.day << ", Cost: " << booking.cost<<" ETB.\n";
                }
            }
            break;
        }
        case 4:
            return;
        default:
            cout << "Invalid choice!\n";
        }
    }
}

