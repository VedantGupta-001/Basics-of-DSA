//Linear Search Program

#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> arr[i];
    }

    int target,c = 0;

    cout << "Enter the target no.:";
    cin >> target;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == target)
        {
            cout << "Target found at index: " << i;
            c++;
        }
        
    }
    if (c == 0)
    {
        cout << "Target not found!!";
    }
}