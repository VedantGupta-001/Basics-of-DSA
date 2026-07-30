#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     int c = 0;
//     cin >> n;
//     for (int i = 2; i < n; i++)
//     {
//         if ((n % i) == 0)
//         {
//             c++;
//         }
//     }
//     if (c == 0)
//     {
//         cout << "Prime";
//     }
//     else
//     {
//         cout << "Not Prime";
//     }
// }

int main()
{
    int n;
    cin >> n;
    int c = 0;
    int i = 2;
    while (i < n)
    {
        if ((n % i)==0)
        {
            c++;
        }
    }
    if (c == 0)
    {
        cout << "prime";
    }
    else
    {
        cout << "Not Prime";
    }
}