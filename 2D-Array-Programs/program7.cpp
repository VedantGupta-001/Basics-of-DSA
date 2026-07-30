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

    int target;
    int c = 0;
    cout << "Enter the target element: ";
    cin >> target;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Target found at index: " << "[" << i+1 << "]" << "[" << j+1 << "]" << endl;
                c++;
            }
        }
    }

    if (c == 0)
    {
        cout << "Target element not found!!";
    }
}