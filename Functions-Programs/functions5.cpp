//WAP to find area and circumference of a circle
#include <iostream>
using namespace std;

int circle(int r)
{
    cout << "Enter radius:";
    cin >> r;
    cout << "Area: " << 3.14*r*r << endl;
    cout << "Circumference: " << 2*3.14*r << endl;
    return 0;
}

int main()
{
    int r;
    circle(r);
}