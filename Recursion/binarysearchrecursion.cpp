#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int left, int right, int target) {
    if (left > right) return -1; 

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) return mid;         
    else if (target < arr[mid]) return binarySearch(arr, left, mid - 1, target);  
    else return binarySearch(arr, mid + 1, right, target);                        
}

int main() {
    int n;
    cout << "Enter size of sorted array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Target found at index " << result << endl;
    else
        cout << "Target not found!" << endl;

    return 0;
}