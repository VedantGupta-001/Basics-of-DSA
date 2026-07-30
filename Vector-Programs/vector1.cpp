#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr;
    for (int i = 0; i < 16; i++)
    {
        int d;
        cout << "Enter the element:";
        cin >> d;
        arr.push_back(d);
    }
    int size = arr.size();
    int c = arr.capacity();
    cout << c << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}