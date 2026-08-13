//WAP to input 2 strings...insert s1 in s2 where the last hi occured

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    cout << "Enter the string:";
    getline(cin, s1);
    string s2;
    s2 = "Hi Hello Hi I am Hello Hi May";
    int i = s2.rfind("Hi");
    cout << s2.insert(i+1,s1);
}