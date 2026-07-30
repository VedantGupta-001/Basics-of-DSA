//#include <iostream>
//using namespace std;

//int main()
//{
//   int a = 500;
//    for (int i = 0; i < a; i++)
//    {
//        if ((i % 11) == 0)
//        {
//            cout << i << endl;
//        }
//    }
//}

#include <iostream>
using namespace std;

int main()
{
    int a = 500;
    for (int i = 0; i < a; i+=11)
    {
        cout << i << endl;
    }
}
