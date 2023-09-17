#include <iostream>
using namespace std;

void primeNumList(int startvalue, int endvalue)
{
    int flag;
    for (int i = startvalue; i <= endvalue; i++)
    {
        if (i==0 || i==1)
        {
           continue;
        }
        
        flag = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << i << " ";
        }
    }
}

int main()
{
primeNumList(10,20);
    return 0;
};