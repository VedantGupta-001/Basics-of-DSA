// Program to find the frequency of each element in the array

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
    int arr2[n];
    int arr3[n];
    int used = 0;
    for (int i = 0; i < n; i++)
    {
        int d = arr[i];
        bool found = false;
        for (int j = 0; j < used; j++)
        {
            if (arr2[j] == d)
            {
                arr3[j]++;
                found = true;
            }
        }
        if (found == false)
        {
            arr2[used] = d;
            arr3[used] = 1;
            used++;
        }
    }

    for (int i = 0; i < used; i++)
    {
        cout << arr2[i] << " occurs " << arr3[i] << " times" << endl;
    }
}