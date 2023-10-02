//Pair Sum Problem
#include <iostream>
#include <climits>
using namespace std;

// bool pairsum(int arr[], int n, int k) {

//     for(int i=0; i<n-1; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(arr[i]+arr[j]==k) {
//                 cout<<"position of first element is: "<<i<<endl<<"position of second element is: "<<j<<endl;
//                 return true;
//             }
//         }
//     }

//     return false;
// }

bool pairsum (int arr[], int n, int k) {
    // Reduced the complexity of code. 
    // The elements in array should be in ascending order.

    int low = 0;
    int high = n-1;

    while(low<high) {
        if(arr[low]+arr[high]==k) {
            cout<<"position of first element: "<<low<<endl<<"position of second element: "<<high<<endl;
            cout<<"sum of numbers is: "<<k<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k) {
            high--;
        }
        else {
            low++;
        }
    }
    return false;
}

int main() {
    int arr[] = {2,4,7,11,14,16,20,21};
    int k=31;

    cout<<pairsum(arr,8,k)<<endl;

    return 0;
}