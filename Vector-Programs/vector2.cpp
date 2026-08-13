// WAP to find out the last occurrence of X in a given vector.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array:";
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        int d;
        cout << "Enter the " << i+1 << " element:";
        cin >> d;
        a.push_back(d);
    }
    int target;
    int index;
    int c = 0;
    cout << "Enter the target element: ";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            index = i;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "Target not found!!!";
    }
    
    cout << "The target " << target << " occurs last at " << index;
}