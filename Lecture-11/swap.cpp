//CALL BY REFERENCE

#include<iostream>
using namespace std;

// void swap(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
        int a=2,b=4;

        int *aptr=&a;   //these 2 new lines added
        int *bptr=&b;

        //swap(a,b);
        swap(aptr, bptr);  //or swap(&a,&b) to avoid above two lines 
        cout<<a<<" "<<b;

    return 0;
}