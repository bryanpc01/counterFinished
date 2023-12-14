/*Coin Counter Lab:

    Write a program that asks the user to enter a number of quarters, dimes, nickels and pennies and then outputs the
    monetary value of the coins in the format of dollars and remaining cents.

    Your program should interact with the user exactly as it shows in the following example:

    Please enter the number of coins:
    # of quarters: 20
    # of dimes: 4
    # of nickels: 13
    # of pennies: 17
    The total is 6 dollars and 22 cents

 */
#include <iostream>
using namespace std;


const int QUARTER = 25;
const int DIME = 10;
const int NICKLE = 05;
const int PENNY = 1;

int main() {

    int quarters, dimes, nickles, pennies;

    int total, dollars, cents;

    cout << "Please enter the number of coins:" << endl;
    cout << "# of quarters: "; cin >> quarters;
    cout << "# of dimes: "; cin >> dimes;
    cout << "# of nickles: "; cin >> nickles;
    cout << "# of pennies: "; cin >> pennies;

    total = quarters * QUARTER + dimes * DIME + nickles * NICKLE + pennies * PENNY;

    dollars = total / 100;
    cents = total % 100;

    cout << "The total is " << dollars << " and " << cents << " cents." << endl;

    return 0;
}
