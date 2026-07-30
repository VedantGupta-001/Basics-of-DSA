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

    int esum = 0;
    int osum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((arr[i][j] % 2) == 0)
            {
                esum = esum + arr[i][j];
            }
            else
            {
                osum = osum + arr[i][j];
            }
        }
    }

    cout << "Sum of all even elements: " << esum << endl;
    cout << "Sum of all odd elements: " << osum << endl;
}