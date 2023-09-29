#include <iostream>
#include <climits>
using namespace std;

int main() {
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int a[n];

    // cout<<"Enter elements of array: ";
    // //Taking inputs for array
    // for(int i=0; i<n; i++) {
    //     cin>>a[i];
    // }
    
    // cout<<"The possible suabarrays are: \n";
    // for(int i=0; i<n; i++) {
    //     for(int j=i; j<n; j++) {
    //         for(int k=i; k<=j; k++) {
    //         cout<<a[k]<<" ";
    //         } cout<<endl;
    //     }
    // }

    //PROBLEM
    //Maximum Subarray Sum
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];

    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    //cout<<"The possible suabarrays are: \n";
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int sum =0;
            for(int k=i; k<=j; k++) {
              sum += a[k];
            } 
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum<<endl;
    // the time complexity is O(n^3) therefore we can aslo use cumulative sum approach.

    return 0;
}