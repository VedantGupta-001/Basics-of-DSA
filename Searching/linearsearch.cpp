#include <iostream>
using namespace std;

int linearsearch(int a[], int n, int item){
    int i = 0;
    int loc = -1;
    while (loc == -1 && i <= n){
        if (a[i] == item){
            loc = i;
        }
        i = i + 1;
    }
    
    if (loc == -1){
        cout << "Element not found!!";
    }
    else{
        cout << "Element found at: " << loc+1 << endl;
    }

    return 0;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i+1 << " element:";
        cin >> a[i];
    }
    int item;
    cout << "Enter the element to search: ";
    cin >> item;
    
    linearsearch(a,n,item);
}