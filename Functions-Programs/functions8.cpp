//WAP to find sum of matrices
#include <iostream>
using namespace std;

int sum(int a[2][3], int b[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int a[2][3], b[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the [" << i+1 << "] [" << j+1 << "] element: ";
            cin >> a[i][j]; 
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the [" << i+1 << "] [" << j+1 << "] element: ";
            cin >> b[i][j]; 
        }
    }
    sum(a,b);
}