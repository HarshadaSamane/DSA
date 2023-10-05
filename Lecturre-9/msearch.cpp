// 2D Matrix Search
// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix
// or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to
// bottom.

#include <iostream>
using namespace std;

int main() {
    int n,m, target;
    cout<<"Enter the columns and rows in matrix:";
    cin>>n>>m;
    cout<<"Enter target element:";
    cin>>target;
    int mat[n][m];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>mat[i][j];
        }
    }
    //for right top
    int r=0, c=m-1;
    bool found = false;
    while(r<n and c>=0) {
        if(mat[r][c] == target) {
            found = true;
            break;
        }

        if(mat[r][c] > target) {
            c--;
        }
        else {
            r++;
        }
    }

    if(found == true) {
        cout<<"Element found ";
    }
    else {
        cout<<"Element does not found ";
    }

    return 0;
}