// Smallest number with it's index

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> arr[i];
    }

    int smallest = arr[0];
    int low;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            low = i;
        }
    }

    cout << "Smallest no. is: " << smallest << " at index: " << low << endl;

}