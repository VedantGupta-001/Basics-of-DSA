#include <iostream>
#include <vector>
using namespace std;

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

    vector <int> result;

    int i = 0;
    while (i < n){
        if (a[i] == item){
            result.push_back(i);
        }
        i++;
    }

    if (result.size() == 0){
        cout << "Element not found!!" ;
    }
    else{
        for (int i = 0; i < result.size(); i++){
            cout << result[i]+1 << " ";
        }
        cout << endl;
        cout << "Element found " << result.size() << " times!!" << endl;
    }
}