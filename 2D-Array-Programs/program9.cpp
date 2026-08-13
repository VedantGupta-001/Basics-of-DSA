//Write a program to find out the transpose of a matrix

#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cout << "Enter the no. of rows:";
    cin >> m;
    cout << "Enter the no. of columns:";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the [" << i+1 << "] [" << j+1 << "] element:";
            cin >> arr[i][j];
        }
    }

    cout << "Transpose of the matrix:" << endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int d;
            d = arr[j][i];
            cout << d << " ";
        }
        cout << endl;
    }
}