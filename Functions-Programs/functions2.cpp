//WAP to find sum of digits
#include <iostream>
using namespace std;

int sumdigits(int n)
{
    int sum = 0;
    for (int i = n; i > 0; i = i/10)
    {
        int d = i % 10;
        sum = sum + d;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << sumdigits(n);
}