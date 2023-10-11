#include <iostream>
using namespace std;

int main() {

    int a = 10;     //stored in stack
    int *p = new int();     //allocate memory in heap
    *p = 10;            //pointing to the memory address
    delete(p);          //deallocate memory

    p = new int[4];     //stores the add of 0th index of an array
    delete[]p;          //to delete block of memory
    p = NULL;           //to delete the pointer

return 0;
}

//size of heap is not fixed.
//we can asscess the memory from anywhere as long as we have memory address
//in dynamic memory allocation if we allocate the memory manually then
// deallocate it manually.
//Dangling pointer: the pointer pointing to a memory allocation where the memory
//is not stored.
//after the main function the p will be destroyed.
//memory leak: is the situation when you allocate memory in heap and dont delete it
//to avoid memory leak deallocate the memory 