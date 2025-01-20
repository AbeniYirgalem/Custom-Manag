#include <iostream>
#include "menu.h"
#include "customer_management.h"
#include "cab_management.h"
#include "hotel_management.h"
#include "billing.h"


using namespace std;

// ManageMenu Function
void ManageMenu() {
    string userName;
    system("color 0A");
    while (true) {
        cout << "\n\n\n\n\n\n\n\n \t\t Enter your Name to continue as an Admin:  ";
        cin>>userName;
        system("CLS");
        if (userName == "Abeni" || userName == "Abraham" || userName == "Aelaf") {
            menu();
            return;
        } else {
            cout << "You are not an Admin. Try again.\n";
            ManageMenu();
        }
    }
}

// Implementation of the menu function
int menu() {
    int mainChoice;

    while (true) {
        cout << "\t\t     * ABC Travels *\n" << endl;
        cout << "\t-----------------------------------------\n";
        cout << "\t|                                      \t|\n";
        cout << "\t|  Customer Management             -> 1\t|\n";
        cout << "\t|  Cabs Management                 -> 2\t|\n";
        cout << "\t|  Hotel Management                -> 3\t|\n";
        cout << "\t|  Charges and Bill                -> 4\t|\n";
        cout << "\t|  Display Customer Sorted by ID   -> 5\t|\n";
        cout << "\t|  Search Customer                 -> 6\t|\n";
        cout << "\t|  Exit                            -> 7\t|\n";
        cout << "\t|                                      \t|\n";
        cout << "\t-----------------------------------------\n";
        cout << "Enter your choice:  ";
        cin >> mainChoice;
        system("CLS");

        switch (mainChoice) {
        case 1:
            getDetails();
            break;
        case 2:
            cabManagement();
            break;
        case 3:
            hotelManagement();
            break;
        case 4:
            printBill();
            showBill();
            break;
        case 5:
            displayTree();
            break;
        case 6:
            searchCustomerMenu();
            break;
        case 7:
            cout << "------ GOOD BYE ------\n";
            return 0;
        default:
            cout << "Invalid input! Please try again.\n";
            break;
        }
    }
}
