#include <iostream>
using namespace std;

int main()
{

    int n, i, j;
    cout<<"Enter  the no. of rows: ";
    cin>>n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n+1-i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //patterns for 0,1
     cout<<"Enter  the no. of rows: ";
     cin>>n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            if((i+j)%2==0) {
                cout<< 1 ;
            } else {
                cout<< 0 ;
            }
        }
        cout<<endl;
    }

    //Rhombus pattern
     cout<<"Enter  the no. of rows: ";
     cin>>n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            cout<<" ";
        }
        for(j=1; j<=n; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    //Number Pattern
     cout<<"Enter  the no. of rows: ";
     cin>>n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            cout<<" ";
        }
        for(j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //Palindromic Pattern
     cout<<"Enter  the no. of rows: ";
     cin>>n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            cout<<"  ";
        }
        int k=i;
        for(; j<=n; j++ ) {
            cout<< k--<<" ";
        }
        k=2;
        for(; j<=n+i-1; j++) {
            cout<< k++<<" ";
        }
        cout<<endl;
    }

    //Star Pattern
     cout<<"Enter  the no. of rows for half pyramid: ";
     cin>>n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            cout<<" ";
        }
        for(j=1; j<=(2*i)-1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=n; i>=1; i--) {
        for(j=1; j<=n-i; j++) {
            cout<<" ";
        }
        for(j=1; j<=(2*i)-1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    // Zig-Zag Pattern for
    cout << "Enter  the no. of rows: ";
    cin >> n;

    for (i = 1; i <= 3; i++){
        for (j = 1; j <= n; j++) {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}