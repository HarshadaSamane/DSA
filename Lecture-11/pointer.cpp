#include<iostream>
using namespace std;

int main() {
        int a = 10;
        int* aptr;
        aptr = &a;

        cout<<&a<<endl;
        cout<<aptr<<endl;
        cout<<*aptr<<endl;

        *aptr = 20;
        cout<<"Value after assignment: "<<a<<endl;

        aptr++;
        cout<<*aptr<<endl;

        int arr[] = {10,20,30};
        cout<<*arr<<endl;

        int *ptr = arr;
        for(int i=0; i<3; i++) {
            cout<<*ptr<<endl;
            ptr++;
        }
        //another method
         for(int i=0; i<3; i++) {
            cout<<*(arr+i)<<endl;
            }

    return 0;
}