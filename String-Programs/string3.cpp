//WAP to find out the no. of occurences of a
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    getline(cin , x);
    int count = 0;
    for (char ch:x)
    {
        if (ch == 'a')
        {
            count++;
        }
    }
    cout << count << endl;
    cout << x.length() << endl;
}