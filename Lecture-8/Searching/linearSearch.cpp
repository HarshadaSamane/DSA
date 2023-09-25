#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int arr[], int n, int key) {

    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
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

    if(linearSearch(arr, n, key) == -1) {
        cout << "Element not found!";
    } else {
        cout << "Element found at position: " << linearSearch(arr, n, key) << endl;
    }

    return 0;
}