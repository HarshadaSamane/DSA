#include <iostream>
using namespace std;

bool check(int x,int y,int z) {
    int a = max(x, max(y,z));
    int b,c;

    if(a == x) {
        b = y;
        c = z;
    }
    else if(a == y) {
        b = x;
        c = z;
    }
    else {
        b = y;
        c = x;
    }

    if( a*a == b*b + c*c ) {
        return true;
    }
    else {
        return false;
    }

}

int main() {
    int x,y,z;

    cout<<"Enter three numbers:\n ";
    cout<<"First no.: ";
    cin>>x;
    cout<<"Second no.: ";
    cin>>y;
    cout<<"Third no.: ";
    cin>>z;

    if(check(x,y,z)) {
        cout<<"Pythagorean triplet";
    }
    else {
        cout<<"Not a pythagorean triplet";
    }
}
