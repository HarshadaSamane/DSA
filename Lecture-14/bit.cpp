#include<iostream>
using namespace std;

//make a no. where the only 1 is present at pos and other places are 0

//get Bit  use & operator
int getBit(int n, int pos) {
    return ((n & (1<<pos)) != 0 );
}

//set Bit use | operator
int setBit(int n, int pos) {
    return (n | (1<<pos));
}

//take one's complement and make the & with original no.
int clearBit(int n, int pos) {
    int mask = ~(1<<pos);
    return (n & mask);
}

//at first clear the bit and then set the bit
int updateBit(int n, int pos, int value) {
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}

int main() {

    cout << getBit (5,2) <<endl;
    cout << setBit (5,1) <<endl;
    cout << clearBit (5,2) <<endl;
    cout << updateBit (5,1,1) << endl;

    return 0;
}//if ans is 1 then 1 is present at correct position