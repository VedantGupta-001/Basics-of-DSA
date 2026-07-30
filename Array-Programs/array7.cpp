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
    int b = 0;
    for (int i = 0; i < 5; i++)
    {
        if ( arr[i] > b)
        {
            b = arr[i];
        }
    }
    cout << "Biggest no. is: " << b;
}