#include <iostream>
#include <vector>
using namespace std;

int main () {

    int arr[4] = {10, 20, 30, 40};
    cout<<arr[3]<<endl;

    //taking inputs from user

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n]; 

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        cout<<"array is: "<<arr [i]<<" ";
    }

    //finding max and min from array
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    //int arr[n];
    for(int i=0; i<n; i++) {
        cout << "Enter element: ";
        cin>>arr[i];
    }

    int maxNo=INT_MIN,minNo=INT_MAX;

    for(int i=0; i<n; i++) {
        // if(arr[i]>max) {
        //     max = arr[i];
        // }
        // if(arr[i]<min) {
        //     min = arr[i];   
        // }

        maxNo=max(arr[i], maxNo);
        minNo=min(arr[i], minNo);
    }
    
    cout << "Maximum no. is: "<< maxNo << endl;
    cout << "Minimun no. is: "<< minNo <<  endl;

    return 0;

}