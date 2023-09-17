#include <iostream>
using namespace std;
inline int sum(int a, int b, int c) { return a + b + c; }
int main()
{
    int ThreenumSum = sum(10, 5, 20);
    cout << "Sum of three number is " << ThreenumSum << endl;

    return 0;
};