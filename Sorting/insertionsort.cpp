#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++){
        cout << "Enter the " << i+1 << " element: ";
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        int temp = a[i];
        int ptr = i - 1;
        while(temp < a[ptr] && ptr >= 0){
            a[ptr+1] = a[ptr];
            ptr = ptr - 1;
            a[ptr+1] = temp;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}