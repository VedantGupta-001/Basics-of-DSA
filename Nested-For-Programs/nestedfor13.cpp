#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << n;
        }
        cout << endl;
        n--;
    }
}