//WAP to find biggest no. in an array
#include <iostream>
using namespace std;

int biggest(int a[5])
{
    int big = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
        }
    }
    return big;
}

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> a[i];
    }
    cout << "Biggest no. in the array: " << biggest(a);
}