//WAP to find out the second largest element in an array
#include <iostream>
using namespace std;

int seclargest(int a[5])
{
    int largest = 0;
    int seclargest = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > largest)
        {
            seclargest = largest;
            largest = a[i];
        }
        else if (a[i] > seclargest && a[i] < largest)
        {
            seclargest = a[i];
        }
    }
    return seclargest;
}

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> a[i];
    }
    cout << seclargest(a) << endl;
}