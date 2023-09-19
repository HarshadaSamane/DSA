#include <iostream>
#include <math.h>
using namespace std;

int main () {
    //reverse number
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int reverse=0;

    while(num>0) {
        int lastdigit= num%10;
        reverse = reverse*10 + lastdigit;
        num=num/10;

    }
    cout<<"Reversed number is: "<<reverse;

    //Armstrong number
    int num,armstrong=0,armnum;
    cout<<"Enter number: ";
    cin>>num;
    int originalnum = num;

    while(num>0) {
        int lastdigit= num%10;
        armnum = pow(lastdigit,3) ;
        armstrong = armstrong + armnum ;
        num=num/10;

    }
    if(armstrong==originalnum) {
    cout<<"Armstrong number is: "<< armstrong;
    } else {
        cout<<"not an armstrong number ";
    }



}