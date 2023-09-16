#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;

    if(a>b) {
        if(a>c)
        cout<<"maximum number is: "<<a <<endl;
        else {
            cout<<"maximum number is: "<<c<<endl;
        }
    } else {
        if(b>c) {
            cout<<"maximum number is: " <<b<<endl;
        } else {
            cout<<"maximum number is: "<<c<<endl;
        }
    }

    return 0;
}