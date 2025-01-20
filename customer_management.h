#ifndef CUSTOMER_MANAGEMENT_H
#define CUSTOMER_MANAGEMENT_H

#include <string>
using namespace std;

// Customer structure
struct Customer {
    int id;
    string name;
    int age;
    string address;
    string gender;
    Customer* next;
};

// Function declarations
void getDetails();
void addCustomer(int id, string name, int age, string address, string gender);
void displayCustomers();
void displayTree();
void searchCustomerMenu();
Customer* searchCustomerById(int id);
Customer* searchCustomerByName(string name);

#endif
