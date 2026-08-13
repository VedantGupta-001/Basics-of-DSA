#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char st[100],st2[100],st3[100];
    cin.getline(st,100);
    cin.getline(st2,100);
    int l = strlen(st);
    int l2 = strlen(st2);
    cout << l << " " << l2 << endl;
    cout << strcmp(st,st2) << endl;
    cout << st << endl;
}