#include "hotel_management.h"
#include <iostream>
using namespace std;

float hotelCost = 0;

void hotelManagement()
    {
        int choiceHotel;
       int packChoice;

        string hotelNo[] = {"Hotel A", "Hotel B", "Hotel C","Exit"};
        for (int i = 0; i < 4; i++)
        {
            cout << (i + 1) << ". " << hotelNo[i] << endl;
        }
        cout << "\nCurrently we collaborated with above hotels" << endl;
        cout << "Enter number of the hotel you want to book: ";
        cin >> choiceHotel;
        system("CLS");

        if (choiceHotel == 1)
        {
            cout << "--------WELCOME TO HOTEL A-------\n" << endl;
            cout << "Packages offered by Hotel A:\n" << endl;
            cout << "1. Standard pack\n";
            cout << "\t\tAll basic facilities you need." << endl<<endl;
            cout << "2. Premium pack\n";
            cout << "\t\tEnjoy premium" << endl<<endl;
            cout << "3. Luxury pack\n";
            cout << "\t\tLive a luxury at Hotel A" << endl<<endl;
             cout << "4.Exit\n";
            cout << "\nEnter package number you want to book:  ";
            cin >> packChoice;
            if (packChoice == 1)
            {
                system("CLS");
                hotelCost = 500;
                cout << "\nYou have successfully booked the standard pack at Hotel A" << endl;

            }
            else if (packChoice == 2)
            {
                system("CLS");
                hotelCost = 1000;
                cout << "\nYou have successfully booked the premium pack at Hotel A" << endl;

            }
            else if (packChoice == 3)
            {
                system("CLS");
                hotelCost = 1500;
                cout << "\nYou have successfully booked the luxury pack at Hotel A" << endl;

            }
            else if(packChoice == 4){
                hotelManagement();
            }
            else
            {
                cout << "Invalid input! Redirecting to the previous menu\nPlease wait" << endl;

                system("CLS");
                hotelManagement();
            }

        }
        else if(choiceHotel == 2){

            cout << "--------WELCOME TO HOTEL B-------\n" << endl;
            cout << "Packages offered by Hotel B:\n" << endl;
            cout << "1. Standard pack\n";
            cout << "\t\tAll basic facilities you need." << endl<<endl;
            cout << "2. Premium pack\n";
            cout << "\t\tEnjoy premium" << endl<<endl;
            cout << "3. Luxury pack\n";
            cout << "\t\tLive a luxury at Hotel B" << endl<<endl;
            cout << "4. Exit\n";
            cout << "\nEnter package number you want to book:  ";
            cin >> packChoice;
            if (packChoice == 1)
            {
                system("CLS");
                hotelCost = 500;
                cout << "\nYou have successfully booked the standard pack at Hotel B" << endl;

            }
            else if (packChoice == 2)
            {
                system("CLS");
                hotelCost = 1000;
                cout << "\nYou have successfully booked the premium pack at Hotel B" << endl;

            }
            else if (packChoice == 3)
            {
                system("CLS");
                hotelCost = 1500;
                cout << "\nYou have successfully booked the luxury pack at Hotel B" << endl;

            }
            else if(packChoice == 4){
                hotelManagement();
            }
            else
            {
                cout << "Invalid input! Redirecting to the previous menu\nPlease wait" << endl;

                system("CLS");
               hotelManagement();
            }

        }
        else if(choiceHotel == 3){

             cout << "--------WELCOME TO HOTEL C-------\n" << endl;
            cout << "Packages offered by Hotel C:\n" << endl;
            cout << "1. Standard pack\n";
            cout << "\t\tAll basic facilities you need." << endl<<endl;
            cout << "2. Premium pack\n";
            cout << "\t\tEnjoy premium" << endl<<endl;
            cout << "3. Luxury pack\n";
            cout << "\t\tLive a luxury at Hotel C" << endl<<endl;
            cout << "4. Exit\n";
            cout << "\nEnter package number you want to book:  ";
            cin >> packChoice;
            if (packChoice == 1)
            {
                system("CLS");
                hotelCost = 500;
                cout << "\nYou have successfully booked the standard pack at Hotel C" << endl;

            }
            else if (packChoice == 2)
            {
                system("CLS");
                hotelCost = 1000;
                cout << "\nYou have successfully booked the premium pack at Hotel C" << endl;

            }
            else if (packChoice == 3)
            {
                system("CLS");
                hotelCost = 1500;
                cout << "\nYou have successfully booked the luxury pack at Hotel C" << endl;

            }
            else if(packChoice == 4){
                hotelManagement();
            }

            else
            {
                cout << "Invalid input! Redirecting to the previous menu\nPlease wait" << endl;

                system("CLS");
                hotelManagement();
            }

        }
        else if(choiceHotel == 4){
            menu();
        }
        else{
            menu();
        }
    }


