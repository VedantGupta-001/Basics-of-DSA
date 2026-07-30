//WAP to find factorial
#include <iostream>
using namespace std;

int factorial(int n)
{
    int a = 0;
    cout << a << endl;
    int b = 1;
    cout << b << endl;
    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the number of terms:";
    cin >> n;
    factorial(n);
}