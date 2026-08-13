//WAP to input a 2-D array exchange row A and row B

#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cout << "Enter the [" << i+1 << "] [" << j+1 << "] element:";
            cin >> a[i][j];
        }
    }
    int r1,r2;
    cout << "Enter the rows u want to exchange:";
    cin >> r1 >> r2;
    for (int i = 0; i < 3; i++)
    {
        int t = a[r1][i];
        a[r1][i] = a[r2][i];
        a[r2][i] = t;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}