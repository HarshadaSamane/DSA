#include<iostream>
using namespace std;

int main() {

    int n, m;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;

    float arr[n][m];
    //taking input
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }

    //printing the array
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Searching the element
    int x;
    cout<<"Enter the number to find: ";
    cin>>x;

    bool flag = false;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j]==x){
                cout<<"position of element is:"<<i<<" "<<j<<"\n";
                flag = true;
            }
            
        }
    }

    if(flag == true) {
        cout<<"Element is found\n";
    }
    else {
        cout<<"Element is not found\n";
    }

     
    return 0;
}