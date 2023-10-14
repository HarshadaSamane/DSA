#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//form the biggest number from the numeric string
// int main() {

//     string s = "45682";
//     sort(s.begin(), s.end(), greater<int>());
//     cout << s << endl;

//     return 0;
// }


//the most time occuring element
int main() {

        string s ="harshada";
        int freq[26];

        for(int i=0; i<26; i++) {
            freq[i] = 0;
        }

        for(int i=0; i<s.size(); i++) {
            freq [s[i]-'a']++;
        }

        char ans = 'a';
        int maxF = 0;

        for (int i=0; i<26; i++) {
            if(freq[i] > maxF) {
                maxF = freq[i];
                ans = i+'a';
            }
        }

        cout << maxF <<" " << ans << endl;


    return 0;
}


