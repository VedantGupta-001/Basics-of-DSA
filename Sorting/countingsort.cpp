#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> a[i];
    }

    int big = a[0];
    for (int i = 0; i < n; i++)
    {
        if (big < a[i])
        {
            big = a[i];
        }
    }

    int c[big+1];
    int b[n];

    for (int i = 0; i <= big; i++)
    {
        c[i] = 0;
    }

    for (int j = 0; j < n; j++)
    {
        c[a[j]]++;   
    }

    for (int i = 1; i <= big; i++)
    {
        c[i] += c[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        b[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
