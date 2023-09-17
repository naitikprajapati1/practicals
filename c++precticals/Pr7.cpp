#include <iostream>
using namespace std;

inline int largerNum(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else if (c > a && c > b)
        return c;
    else
    {
        cout << "Please Give a valid input number";
    }
}
int main()
{
    int answer = largerNum(10, 2, 05);
    cout << "Largest number among three number is " << answer;

    return 0;
};