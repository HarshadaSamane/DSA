// Problem

// Given a square matrix A & its number of rows (or columns) N,
// return the transpose of A.

// The transpose of a matrix is the matrix flipped over it's main
// diagonal, switching the row and column indices of the matrix.


#include <iostream>
using namespace std;

int main() {
    int A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

   for(int i=0; i<3; i++) {
    for(int j=i; j<3; j++) {
        int temp = A[i][j];//store A[i][j] in temp
        A[i][j] = A[j][i];
        A[j][i] = temp;
    }
   }

    //print
   for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++) {
        cout << A[i][j] << " ";
    }
    cout << endl;
   }

    return 0;
}