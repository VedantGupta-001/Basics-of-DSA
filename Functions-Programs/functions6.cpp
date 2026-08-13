//WAP to swap 2 no.s
#include <iostream>
using namespace std;

int swap(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    cout << "After swapping:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}

int main()
{
    int a = 2;
    int b = 3;
    swap(a,b);
}