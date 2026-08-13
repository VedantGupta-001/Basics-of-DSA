//WAP to find out if the length of S1 = S2 then match them and if length of S1 > S2 concatinate S2 with S1 and if length of S1 > S2 then find out the no. of occurrences of a in S2.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S1;
    getline(cin , S1);
    string S2;
    getline(cin , S2);
    if (S1.length() == S2.length())
    {
        cout << S1 << endl;
    }
    else if (S1.length() > S2.length())
    {
        cout << S2 + S1 << endl;
    }
    else
    {   
        int count = 0;
        for (char ch:S2)
        {
            if(ch == 'a')
            {
                count++;
            }
        }
        cout << "Count of a: " << count << endl;
    }
}