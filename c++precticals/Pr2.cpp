/* problem 2:-  Write a program which accepts amount as integer and display total number of Notes
 of Rs. 500, 100, 50,20, 10, 5 and 1.
 For example, when user enter a number, 575, the
 results would be like this...500: 1
 100: 0
 50: 1
 20: 1
 10: 0
 5: 1
 1: 0
*/

#include <iostream>
using namespace std;

void calculateNotes(int amount)
{
    int count, note_500, note_100, note_50, note_20, note_10, note_5, note_1;

    note_500 = amount / 500;
    amount = amount % 500;
    note_100 = amount / 100;
    amount = amount % 100;
    note_50 = amount / 50;
    amount = amount % 50;
    note_20 = amount / 20;
    amount = amount % 20;
    note_10 = amount / 10;
    amount = amount % 10;
    note_5 = amount / 5;
    amount = amount % 5;
    note_1 = amount;

    cout << "Rs.500 : " << note_500 << "\nRs.100 : " << note_100 << "\nRs.50 : " << note_50 << "\nRs.20 : " << note_20 << "\nRs.10 : " << note_10 << "\nRs.5 : " << note_5 << "\nRs.1 : " << note_1;
}

int main()
{
    int amount;
    cout << "Enter the Amount  " << endl;
    cin >> amount;
    calculateNotes(amount);

    return 0;
};
