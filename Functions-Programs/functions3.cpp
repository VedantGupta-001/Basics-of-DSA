//WAP to add and sub 2 no.s
#include <iostream>
using namespace std;

int add(int a, int b)
{   
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    return a + b;
}

int sub(int a, int b)
{
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    return a - b;
}

int main()
{
    int a,b;
    cout << add(a,b) << endl;
    cout << sub(a,b) << endl;
}