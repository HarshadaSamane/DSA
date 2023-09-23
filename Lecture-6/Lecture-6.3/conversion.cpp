#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(int n) {
    int ans = 0;
    int x = 1;
    
    while(n>0) {
        int y = n%10;
        ans = ans + (x*y);
        x = x*2;
        n = n/10; 
    }
    return ans;
}

int binaryToOctal(int n) {
    int ans = 0;
    int x = 1;
    
    while(n>0) {
        int y = n%10;
        ans = ans + (x*y);
        x = x*8;
        n = n/10; 
    }
    return ans;
}

int hexadecimalToDecimal(string m) {
    int ans = 0;
    int x = 1;

    int s = n.size();
    for(int i=s-1; i>=0; i--) {
        if(n[i] >= '0' && n[i] <= '9') {
            ans = ans + x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F') {
            ans = ans + x*(n[i]-'A' + 10);
        }
        x *= 16;
    }
    return ans;

}

int decimalToBinary(int n) {
    int ans = 0;
    int x = 1;

    while( )  
}

int main () {

     
    //int n;
    // cout<<"Enter a binary num to convert: ";
    // cin>>n;
    
    // cout <<"Decimal num is: "<< binaryToDecimal(n) << endl;

    //Octal to decimal
    //int n;
    // cout<<"Enter a octal num to convert: ";
    // cin>>n;
    
    // cout <<"Octal num is: "<< binaryToOctal(n) << endl;

    //Hexadecimal to Decimal
    string m;
    cout<<"Enter a Hexadecimal num to convert: ";
    cin>>m;
    
    cout <<"Decimal num is: "<< hexadecimalToDecimal(m) << endl;

    //Decimal to binary
    int n;
    cout<<"Enter a Decimal num to convert: ";
    cin>>n;
    
    cout <<"Binary num is: "<< decimalToBinary(n) << endl;


}