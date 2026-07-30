// WAP to find out the occurrences of X.
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
    int c = 0;
    int count = 0;
    cout << "Enter the target element:";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            count++;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "The target element was not found!!";
    }
    cout << "The target element " << target << " was found " << count << " times" << endl;
}