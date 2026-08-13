#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i+1 << " element: ";
        cin >> arr[i];
    }
    int esum = 0;
    int osum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            esum = esum + arr[i];
        }
        else
        {
            osum = osum + arr[i];
        }
    }
    cout << "Sum of all even numbers: " << esum << endl;
    cout << "Sum of all odd numbers: " << osum;
}
