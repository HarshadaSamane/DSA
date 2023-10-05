//largest word in a array

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i;
    int currLen=0, maxlen=0;
    int st = 0, maxst = 0;

    while(1){
        if(arr[i] == ' ' || arr[i] == '\0') {
            if (currLen > maxlen) {
                maxlen = currLen;
                maxst = st;
            }
            currLen = 0;//reset the current length to 0 for next iteration  
            st = i+1;
        }
        else {
        currLen++;
            }

        if(arr[i] == '\0') {
            break;
        }

        i++;
    }
    cout << maxlen << endl;

    for(i=0; i<maxlen; i++) {
        cout << arr[i+maxst];
    }

    return 0;
}