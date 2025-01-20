#include "customer_management.h"
#include <iostream>
#include <stack>
#include <string>
#include "utils.h"
using namespace std;

// Global Variables
Customer* head = nullptr;
stack<string> undoStack;


// Add a customer to the linked list
void addCustomer(int id, string name, int age, string address, string gender) {
    Customer* newCustomer = new Customer{id, name, age, address, gender, nullptr};
    if (!head) {
        head = newCustomer;
    } else {
        Customer* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newCustomer;
    }
    undoStack.push("Added customer: " + name);
}

// Function implementations
void getDetails() {
    int id, age;
    string name, address, gender;

    cout << "Enter customer ID: ";
    cin >> id;
    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter customer age: ";
    cin >> age;
    cout << "Enter customer address: ";
    cin.ignore();
    getline(cin, address);
    cout << "Enter customer gender: ";
    cin >> gender;
    addCustomer(id, name, age, address, gender);
    addCustomerToTree(id, name);

    cout << "Customer details saved.\n";
}

// Display customers in the linked list
void displayCustomers() {
    if (!head) {
        cout << "No customers found.\n";
        return;
    }
    Customer* temp = head;
    while (temp) {
        cout << "Customer ID: " << temp->id << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Age: " << temp->age << endl;
        cout << "Address: " << temp->address << endl;
        cout << "Gender: " << temp->gender << endl;
        cout << "----------------------------\n";
        temp = temp->next;
    }
}

// Display the tree
void displayTree() {
    if (!root) {
        cout << "No customers in the tree.\n";
        return;
    }
    inorderTraversal(root);
}

// Search customer by ID
Customer* searchCustomerById(int id) {
    Customer* temp = head;
    while (temp) {
        if (temp->id == id) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

// Search customer by Name
Customer* searchCustomerByName(string name) {
    Customer* temp = head;
    while (temp) {
        if (temp->name == name) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

// Search Menu
void searchCustomerMenu() {
    int choice;
    cout << "\n------ Search Customer ------\n";
    cout << "1. Search by ID\n";
    cout << "2. Search by Name\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int id;
        cout << "Enter customer ID: ";
        cin >> id;
        Customer* customer = searchCustomerById(id);
        if (customer) {
            cout << "Customer found:\n";
            cout << "ID: " << customer->id << "\nName: " << customer->name << "\nAge: "
            << customer->age << "\nAddress: " << customer->address << "\nGender: " << customer->gender << endl;
        } else {
            cout << "Customer with ID " << id << " not found.\n";
        }
    } else if (choice == 2) {
        string name;
        cout << "Enter customer name: ";
        cin.ignore();
        getline(cin, name);
        Customer* customer = searchCustomerByName(name);
        if (customer) {
            cout << "Customer found:\n";
            cout << "ID: " << customer->id << "\nName: " << customer->name << "\nAge: "
            << customer->age << "\nAddress: " << customer->address << "\nGender: " << customer->gender << endl;
        } else {
            cout << "Customer with name " << name << " not found.\n";
        }
    } else {
        cout << "Invalid choice!\n";
    }
}


