#include<iostream>
using namespace std;

void increment(int a) {
    a++;
}

int main() {
    int a = 2;
    increment(a);
    cout<<a<<endl;

   return 0;
}
//the value of a does not changes because in function the declared a is different.