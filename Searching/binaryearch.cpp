#include <iostream>
using namespace std;

void binarysearch(int a[],int item,int n){
    int low = 0;
    int high = n-1;
    int pos = -1;
    while (low <= high){
        int mid = low + (high - low)/2;
        if (a[mid] == item){
            pos = mid;
            break;
        }
        else if (a[mid] < item){
            low = mid + 1;
        }
        else if (a[mid] > item){
            high = mid - 1;
        }
    }
    if (pos == -1){
        cout << "Element not found!!" << endl;
    }
    else{
        cout << "Element found at: " << pos+1 << endl;
    }
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

    binarysearch(a,item,n);
}