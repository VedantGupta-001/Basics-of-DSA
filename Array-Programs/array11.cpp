//Program to print the reverse of an array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> arr[i];
    }

    int d = 0;

    for (int i = n; i > 0; i--)
    {
        d = arr[i-1];
        cout << d << " ";
    }
}