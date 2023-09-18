#include <iostream>
using namespace std;

int main() {
    //rectangle pattern
    int i,j,row,col,n,count=1;
    cout<<"Enter no. of rows: ";
    cin>>row;
    cout<<"Enter no. of col: ";
    cin>>col;

    for(i=1; i<=row;i++) {
        for(j=1; j<=col; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }


    //Hollow Rectangle
    cout<<"Enter no. of rows: ";
    cin>>row;
    cout<<"Enter no. of col: ";
    cin>>col;

    for(i=1; i<=row; i++) {
        for(j=1; j<=col; j++) {
            if(i==1 || i==row) {
                cout<<"*";
            } else if (j==1 || j==col) {
                cout<<"*";
            } else {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }

    //Inverted half pyramid
    cout<<"Enter the number: ";
    cin>>n;

    for(i=n; i>=1; i--) {
        for(j=1; j<=i; j++) {
        cout<<"* "; 
        }
        cout<<endl;
    }

        
    // Half pyramid after 180degree rotation
    cout<<"Enter the number: ";
    cin>>n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            if(j<=n-i) {
                cout<<" ";
            } else {
                cout<<"* ";
            }
        }
        cout<<endl;
    }


    //Half Pyramid with numbers
    cout<<"Enter no. of rows: ";
    cin>>row;
    
    for(i=1; i<=row; i++) {
        for(j=1; j<=i; j++) {
            cout<<i<<" ";
        } cout<<endl;
    }
    
    //Floyd's triangle
    cout<<"Enter no. of rows: ";
    cin>>row;
    for(i=1; i<=row; i++) {
        for(j=1; j<=i; j++) {
            cout<<count<<" ";
            count++;
        } cout<<endl;
    }

    //Butterfly Pattern
    cout<<"Enter no. of rows: ";
    cin>>n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            cout<<"* ";
        }
        int space = 2*n - 2*i;
        for(j=1; j<=space; j++) {
            cout<<"  ";
        }
        for(j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(i=n; i>=1; i--) {
        for(j=1; j<=i; j++) {
            cout<<"* ";
        }
        int space = 2*n - 2*i;
        for(j=1; j<=space; j++) {
            cout<<"  ";
        }
        for(j=1; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}