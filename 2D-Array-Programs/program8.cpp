#include <iostream>
using namespace std;

int main()
{
    int m,n,p,q;
    cout << "Enter the no. of rows of matrix A:";
    cin >> m;
    cout << "Enter the no. of columns of matrix A:";
    cin >> n;
    cout << "Enter the no. of rows of matrix B:";
    cin >> p;
    cout << "Enter the no. of columns of matrix B:";
    cin >> q;
    
    int a[m][n],b[p][q],c[m][q];
    
    if (n == p)
    {   
        cout << "Enter Matrix A:" << endl;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "Enter the [" << i+1 << "] [" << j+1 << "] element:";
                cin >> a[i][j];
            }
        }

        cout << "Enter Matrix B:" << endl;

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << "Enter the [" << i+1 << "] [" << j+1 << "] element:";
                cin >> b[i][j];
            }
        }

        cout << "Product of the two matrices:" << endl;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                int sum = 0;
                for (int k = 0; k < n; k++)
                {
                    int product;
                    product = a[i][k]*b[k][j];
                    sum = sum + product;
                }
                cout << sum << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Multiplication of these matrices is not possible!!";
    }
}