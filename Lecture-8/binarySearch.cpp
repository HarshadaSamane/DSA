#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int n, int key) {

    int s=0, e=n;

    while (s <= e)
    {
        int mid = (s+e)/2;

        if(arr[mid] == key) {
            return mid;
            }
        else if(arr[mid] > key) {
            e = mid-1;
        }
        else {
            s = mid+1;
        }
    }

    return -1;
}

int main() {

    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to find in the array: ";
    cin >> key;

    if(binarySearch(arr, n, key) == -1) {
        cout << "Element not found!";
    } else {
        cout << "Element found at position: " << binarySearch(arr, n, key) << endl;
    }

    return 0;
}