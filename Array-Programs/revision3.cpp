//WAP to input a 1-D array and print all the elements of array only once

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        int w;
        cout << "Enter the [" << i+1 << "] element:";
        cin >> w;
        a.push_back(w);
    }
    vector <int> b;
    int used = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int d = a[i];
        for (int j = 0; j < used; j++)
        {
            if (b[j] == d)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            b.push_back(d);
            used++;
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
}