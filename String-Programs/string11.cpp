//WAP to replace all the even index characters of s1 by s2

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int j = 0;
    for (int i = 0; i < s1.length();i+=2)
    {
        s1[i] = s2;
    }
    cout << s1 << endl;
}