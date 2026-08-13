#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    cout << "Enter the string:";
    getline(cin , s1);
    string s2;
    cout << "Enter the string:";
    getline(cin, s2);
    int l = s1.length();
    string s3 = "";
    s3 += s1[l-3];
    s3 += s1[l-2];
    s3 += s1[l-1];
    cout << s3 + s2 << endl;
}