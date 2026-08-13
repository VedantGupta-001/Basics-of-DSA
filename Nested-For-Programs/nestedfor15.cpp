#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    for (int i = 1; i < 6; i++)
    {
        int n = 1;
        for (int j = 5; j >= i; j--)
        {
            cout << n;
            n++;
        }
        cout << endl;
    }
    for (int k = 0; k < 4; k++)
    {
        int n = 1;
        for (int m = -1; m <= k; m++)
        {
            cout << n;
            n++;
        }
        cout << endl;
    }
}