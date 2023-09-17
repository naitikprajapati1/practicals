// ? problem1:- Write a program which accept temperature in Fahrenheit and print it in centigrade

#include <iostream>
#include <iomanip>
using namespace std;

float fahrenHitToCentiGrade(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
int main()
{

    float far, tempToCentigrade;

    cout << "Enter the value of far " << endl;
    cin >> far;
    tempToCentigrade = fahrenHitToCentiGrade(far);

    cout << "Temp in Celsius" << setprecision(5) << tempToCentigrade;

    return 0;
};