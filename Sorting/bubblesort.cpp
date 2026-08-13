#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cout << "Enter the " << i+1 << " element: ";
        cin >> a[i];
    }

    for (int i = 1; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[j] > a[j+1]){
                int t = a[j+1];
                a[j+1] = a[j];
                a[j] = t;
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}