#include <iostream>
using namespace std;

int main()
{
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the [" << i+1 << "] [" << j+1 << "] element:";
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    cout << "Sum of all the elements of the matrix: " << sum << endl; 
}