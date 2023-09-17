#include<iostream>
using namespace std;

//Basic calculator
int main() {
    int a,b,choice;
    
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter your choice: \n1.Additiion \n2.Subtraction \n3.Multipication \n4.Division\n ";
    cin>>choice;

    switch(choice)
    {
        case 1: 
        cout<<"Addition is: "<<a+b<<endl;
        break;

         case 2: 
        cout<<"Subtraction is: "<<a-b<<endl;
        break;

         case 3: 
        cout<<"Multiplication is: "<<a*b<<endl;
        break;

         case 4: 
        cout<<"Division is: "<<a/b<<endl;
        break;

        default:
        cout<<"You entered wrong choice";
        break;
    }
}
