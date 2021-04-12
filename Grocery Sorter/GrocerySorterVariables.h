#include <iostream>

using namespace std;

class Groceries
{
private:
	int num;

public:
	int select;
};

int select; //Variable for user to select destination is main menu
int numberOfGrocery; //Variable for user to input the quantity of a grocery they bought
int verdict; //Variable for user to verify information entered is correct
int daysUntilExpiry; //Variable for user to input the number of days a grocery has until expiry
string groceryName; //Variable for user to enter the name of the grocery they bought
string date; //Variable for user to enter in the date a grocery was bought
string listName; //Variable for user to input which list they would like to choose

ofstream exportInformationToList; //Declaration to open outstream. User will be able to choose list name

