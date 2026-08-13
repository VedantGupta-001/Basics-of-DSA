#include <iostream>
using namespace std;

int main()
{
    int arr[2][3];
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {   
            cout << "Enter the [" << i+1 <<"] [" << j+1 << "] element:";
            cin >> arr[i][j]; 
        }
    }

    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}