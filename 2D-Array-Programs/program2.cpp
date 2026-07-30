#include <iostream>
using namespace std;

int main()
{
    int arr[2][3], k[2][3];

    cout << "Enter the elements of matrix A" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the [" << i+1 << "] [" << j+1 << "] element:";
            cin >> arr[i][j];
        }
    }

    cout << "Enter the elements of matrix B" << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the [" << i+1 << "] [" << j+1 << "] element:";
            cin >> k[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] + k[i][j] << " ";
        }
        cout << endl;
    }
}