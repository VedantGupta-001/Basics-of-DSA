#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> arr[i];
    }
    cout << "\n";
    int k[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> k[i];
    }
    cout << "\n";
    cout << "Product: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] * k[i] << " ";
    }
}