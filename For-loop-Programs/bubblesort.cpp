#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int d;
    cout << "Enter the number of terms:";
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> d;
        a.push_back(d);
    }
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}