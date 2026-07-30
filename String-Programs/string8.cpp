//Substring

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string s1 = s.substr(1,3);
    cout << s1 << endl;
    cout << s.find("name") << endl;
    cout << s.rfind("name");
    cout << s.insert(3,"class");
}