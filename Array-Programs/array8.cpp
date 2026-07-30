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
    int s = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if ( arr[i] < s)
        {
            s = arr[i];
        }
    }
    cout << "Smallest no. is: " << s;
}
