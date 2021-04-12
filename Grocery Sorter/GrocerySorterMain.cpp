#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> 
#include "GrocerySorterVariables.h"

using namespace std;

void mainMenu();
void addGrocery();
void confirmInput();

int main() {
    mainMenu();
}

void mainMenu() {
    cout << "Hello, welecome to the gorcery sorter!" << endl << endl;
    cout << "Would like like to add a grocery or view your existing grocery lists?" << endl << endl;
    cout << "[1] Add Grocery" << endl;
    cout << "[2] View Lists" << endl << endl;

    cout << "Your input is ";
    cin >> select; cout << endl;

    cout << setfill('*') << setw(100) << " " << endl << endl;

    switch (select) { //Code that allows user to choose selection of where they would like to do in program. This block of code is the main menu
    case 1: //Initiates block of code for the add grocery function of program
        addGrocery();

    case 2: //Initiates block of code for the view grocery list function of program
        cout << "Viewing Grocery Lists" << endl << endl;
        cout << setfill('*') << setw(100) << " " << endl << endl;
        cout << "Please type in which list you would like to view" << endl << endl;
        break;

    default: //Returns error message if user inputs an invalid number
        cout << "Sorry, that's an invalid input. Please try entering either 1 or 2 from your keyboard!" << endl << endl;
        cout << setfill('*') << setw(100) << " " << endl << endl;
        mainMenu();
    }
}

void addGrocery() {
    cout << "Add a Grocery" << endl << endl;
    cout << setfill('*') << setw(100) << " " << endl << endl;
    cout << "Please type in the name of the grocery you bought" << endl << endl << "Grocery Name: ";
    cin >> groceryName; cout << endl;

    cout << "How many " << groceryName << " did you buy?" << endl << endl << "Number of " << groceryName << " bought: ";

    cin >> numberOfGrocery; cout << endl;

    cout << "How many days until this item expires? Please enter this in number of days! You might need to use Google to find an exact number." << endl;
    cin >> daysUntilExpiry; cout << endl;

    cout << "What date were these " << groceryName << " purchased? Please enter this is in MM/DD/YYYY format for legibility reasons. Please be careful!" << endl << endl << "Date Bought: ";
    cin >> date; cout << endl;

    confirmInput();
}

void confirmInput() {
    cout << setfill('*') << setw(100) << " " << endl << endl;
    cout << "Does all of this information look correct?" << endl << endl;

    cout << "Grocery Name: " << groceryName << endl;
    cout << "Quatity Bought: " << numberOfGrocery << endl;
    cout << "Date Bought: " << date << endl;
    cout << "Days Until Expiry: " << daysUntilExpiry << endl << endl;

    cout << "[1] Yes" << endl;
    cout << "[2] No" << endl << endl;

    cout << "Your input is ";
    cin >> select; cout << endl << endl;

    switch (select) {
    case 1: //Initiates block of code to choose which grocery list to add the grocery information to
        cout << "Awesome! Now which grocery list would you like to add this to?" << endl;
        cout << "You can send it to an existing list by entering its name or create a new one by using an unused name." << endl << endl;
        cout << "Grocery List Name: ";
        cin >> listName; cout << endl; //User inputs the name of the list they would like to add their grocery information to
        cout << "Your grocery " << groceryName << " was saved to your grocery list " << listName << "." << endl << endl;

        cout << "Bringing you to your grocery lists now. Your last grocery " << groceryName << " was added to the list " << listName << ". You can get to the list " << listName << " by typing in " << listName << "." << endl << endl;

        cout << setfill('*') << setw(100) << " " << endl << endl;

        break;

    case 2: //Initiates block of code to rerun the enter grocery functions
        cout << "Shoot! Let's get that information reentered. We'll clear all the data you've entered and you can reenter it from the top." << endl << endl;
        cout << setfill('*') << setw(100) << " " << endl << endl;
        addGrocery();
        break;

    default: //Returns error message if user inputs an invalid number
        cout << "Sorry, that's an invalid input. Please try entering either 1 or 2 from your keyboard!" << endl << endl;
        confirmInput();
    }
}
