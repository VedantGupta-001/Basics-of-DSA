#include <iostream>
using namespace std;

int main()
{
    int a,b,c,x;
    cout << "Enter the number:";
    cin >> x;

    a = 0;
    cout << a << endl;
    b = 1;
    cout << b << endl;

    for (int i = 2; i < x; i++)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
}