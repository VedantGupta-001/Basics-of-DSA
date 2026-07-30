//WAP to find out whether a given string is palindrome or not
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[10];
    char s2[10];
    int j = 0;
    cout << "Enter the string:";
    cin.getline(s,10);
    int l = strlen(s);
    for (int i = l-1; i >= 0; i--)
    {
        s2[j] = s[i];
        j++;
    }
    cout << s2 << endl;
    if (strcmp(s,s2) == 0)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}