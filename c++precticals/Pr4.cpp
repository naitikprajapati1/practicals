// 4 Write a program to print following :
// *
// ***
// *****
// *******
// *********

#include <iostream>
using namespace std;

int main()
{
    int cols = 1;

    // loop for rows
    for (int i = 1; i <= 5; i++)
    {
        // loop for columns
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        // start new line 
        cout << endl;
    }

    return 0;
};