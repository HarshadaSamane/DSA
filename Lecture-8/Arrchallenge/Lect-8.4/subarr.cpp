#include "bits/stdc++.h"
#include <iostream>
using namespace std;

int main() {
    // Given an array a[] of size n. Output sum of each
    //        subarray of the given array.

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int curr = 0;
    for(int i=0; i<n; i++) {
        curr = 0;
        for(int j=i; j<n; j++) {
            curr = curr + arr[j];
            cout<< curr <<endl;
        }
    }


    return 0;

}