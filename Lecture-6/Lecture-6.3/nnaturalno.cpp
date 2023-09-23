#include <iostream>
using namespace std;

int sum(int n) {
    int i,ans=0;

    for(i=0; i<=n; i++) {
        ans = ans + i;
    }
    return ans;
} 

int main() {
    int n;
    cout<<"Enter the number to find sum: ";
    cin>>n;

    cout<<sum(n)<<endl;
}