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

    int smallest = arr[0][0];
    int low1;
    int low2;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (smallest > arr[i][j])
            {
                smallest = arr[i][j];
                low1 = i;
                low2 = j;
            }
        }
    }

    cout << "The Smallest element in the matrix: " << smallest << endl;
    cout << "The index of the element: " << "[" << low1+1 << "]" << "[" << low2+1 << "]";
}