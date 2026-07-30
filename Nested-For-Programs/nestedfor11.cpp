#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << n;
        }
        n++;
        cout << endl;
    }
}