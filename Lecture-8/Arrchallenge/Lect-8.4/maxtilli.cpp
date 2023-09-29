#include <iostream>
using namespace std;

int main() {
    int mx = -999999;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter elements in array: \n";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
   
    for(int i=0; i<n; i++) {
        mx = max(mx, arr[i]);
        cout<<"Maximum till "<<i<<" position is: "<<mx<<endl;
    }

    return 0;
}