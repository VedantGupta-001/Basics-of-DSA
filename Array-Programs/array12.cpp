// Program to copy one array to another

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> arr[i];
    }
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }
    cout << "The copied array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}