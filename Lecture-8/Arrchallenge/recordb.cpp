//Kick Start

// Problem:

// Isyana is given the number of visitors at her local theme park on N consecutive days. The
// number of visitors on the i-th day is Vi .A day is record breaking if it satisfies both of the
// following conditions:
// 1. The number-of-visitors on the day is strictly larger than the number of visitors on each
// of the previous days.
// 2. Either it is the last day, or the number of visitors on the day is strictly larger than the
// number of visitors on the following day.
// Note that the very first day could be a record breaking day!

// Input:

// The first line of the input gives the number of test cases, T. T test cases follow. Each test
// case begins with a line containing the integer N. The second line contains N integers. The
// i-th integer is Vi.

// Output:

// For each test case, output one line containing Case #x: y, where x is the test case number
// (starting from 1) and y is the number of record breaking days.

// Constraints:

// Time limit: 20 seconds per test set.
// Memory limit: 1GB.

// 1<= T <= 100.
// 0<= vi <=2*10^5

// Test Case 1 
// 1<= N <= 1000.

// Test set 2

// 1<= N <=2*10^5 for at most 10 test cases.

// For the remaining cases, 1 <= N <= 1000.

#include<iostream>
#include "bits/stdc++.h"
using namespace std;

int main() {

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n+1];
    arr[n] = -1;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    if(n == 1) {
        cout<<"1"<<endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for(int i=0; i<n; i++) {

        if(arr[i] > mx && arr[i] > arr[i+1]) {
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout<<"No. of record breaking days is: "<<ans<<endl;

    return 0;
}
