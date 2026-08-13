#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 4; i++)
    {
        int c = 5;
        for (int j = 5; j > i; j--)
        {
            cout << c;
            c = c - 1;
        }
        cout << endl;
    }
}