// Lab 6 kiloConverter.cpp 
// This menu-driven program lets the user convert 
// pounds to kilograms and kilograms to pounds.
// Faith Morgan
#include <iostream>
using namespace std;

// Function prototypes
void displayMenu();
int getChoice(int,int);
void kilosToPounds();
void poundsToKilos();

/*****     main     *****/
int main()
{
    int choice;

    do
    {
        displayMenu();
        choice = getChoice(1, 3);

        if (choice == 1)                              
        {
            kilosToPounds();
        }
        else if (choice == 2)                         
        {
            poundsToKilos();
        }
    } while (choice != 3);
     
   return 0;
}

/*****     displayMenu     *****/
void displayMenu()
{
    cout << "1. Convert kilograms to pounds\n"
        << "2. Convert pounds to kilograms\n"
        << "3. Quit \n\n";
}

/*****     getChoice     *****/
int getChoice(int min, int max)
{
    int input;

    // Get and validate the input
    cin >> input;
    while (input < min || input > max)
    {
        cout << "Invalid input. Enter an integer between " << min << " and " << max << ": ";
        cin >> input;
    }
    return input;
}

/*****     kilosToPounds     *****/
void kilosToPounds()
{
    double kilos, pounds;

    cout << "Weight to be converted: ";
    cin >> kilos;

    pounds = kilos * 2.2;
    cout << kilos << " kilograms = " << pounds << " pounds.\n\n";
}

/*****    poundsToKilos     *****/
void poundsToKilos()
{
    double kilos, pounds;

    cout << "Weight to be converted: ";
    cin >> pounds;

    kilos = pounds / 2.2;
    cout << pounds << " pounds = " << kilos << " kilograms.\n\n";
}
