//WAP to find product and division of 2 no.s
#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    return a * b;
}

int divide(int a, int b)
{
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    return a / b;
}

int main()
{
    int a,b;
    cout << multiply(a,b) << endl;
    cout << divide(a,b) << endl;
}