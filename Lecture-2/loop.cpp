#include <iostream>
using namespace std;

int main()
{
    int a,b,c,sum=0;
    // TO FIND SUM
    cout<<"Enter a number: ";
    cin>>a;

    for(int i=0; i<=a; i++) {
        sum = sum + i;
    }

    cout<<"sum is: "<<sum;

//  TAKE INPUT FROM USER AND PRINT UNNTIL IT IS POSITIVE
// While Loop

   cout<<"Enter a number:\n";
   cin>>b;

   while(b>0) {
    cout<<b<<endl;
    cout<<"Enter a number:\n";
    cin>>b;
   }

    // DO WHILE LOOP
    cout<< "Enter a number: ";
    cin>> c;
    do {
        cout<< c <<endl;
        cout<< "Enter next number: ";
        cin>> c;
    } while(c>0);

    return 0;
}


