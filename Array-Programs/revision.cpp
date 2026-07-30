//WAP to input all numbers from x to y and find out all the divisible by a and b.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array:";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the [" << i+1 << "] element:";
        cin >> a[i];
    }
    int d;
    cout << "Enter the number of times u want the array to shift towards left:";
    cin >> d;
    for (int i = 0; i < d;i++)
    {
        int t =a[0];
        for (int j = 0; j < n;j++)
        {
            a[j] = a[j+1];
            if (j = n-1)
            {
                a[j] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
