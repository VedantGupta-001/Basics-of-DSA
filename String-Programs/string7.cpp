#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    cout << "Enter the string:";
    getline(cin , s1);
    int vcount = 0;
    int ccount = 0;
    int dcount = 0;
    int wcount = 0;
    for (char ch:s1)
    {
        if (isalpha(ch))
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vcount++;
            }
            else
            {
                ccount++;
            }
        }
        else if (isdigit(ch))
        {
            dcount++;
        }
        else if (isspace(ch))
        {
            wcount++;
        }
    }
    cout << vcount << endl;
    cout << ccount << endl;
    cout << dcount << endl;
    cout << wcount << endl;
}