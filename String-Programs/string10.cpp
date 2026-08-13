//WAP to find out whether the strings are annergan or not

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1,s2;
    cout << "Enter the string:";
    getline(cin,s1);
    cout << "Enter the string:";
    getline(cin,s2);
    int len1 = size(s1);
    int len2 = size(s2);
    if (len1 == len2)
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if (s1 == s2)
        {
            cout << "Annergan" << endl;
        }
        else 
        {
            cout << "Not Annergan" << endl;
        }
    }
    else
    {
        cout << "Not an annergan" << endl;
    }
}