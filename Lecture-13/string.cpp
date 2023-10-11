#include<iostream>
#include<string>
#include<algorithm> //to sort
using namespace std;

int main() {
   
    string str;

    //1.
    cin>>str;
    cout<<str;

    //2.
    string str1(5,'s');
    cout << str1 << endl;

    //3.
    string str2 = "Ankita";
    cout<<str2;

    //4.
    string str;
    getline(cin, str);      //it includes spaces
    cout << str << endl;

    //5.
    string s1 = "fam";
    string s2 = "ily"; 
    //s1.append(s2);
    //cout << s1 <<endl;

    //6.
    cout << s1+s2 << endl;
    cout << s1[1] << endl;

    //7.
    string abc = "asdfryrnk";
    abc.clear();
    cout << abc;

    //8.
    string s1 = "abc";
    string s2 = "xyz";
    cout << s2.compare(s1) <<endl; 
    if(s1.compare(s2) == 0) {
    cout << "\nStrings are equal"; 
    }
    else {
        cout << "\nstrings are not equal";
    }

    //9.
    string s1 = "abc";
    cout << s1 <<endl;
    s1.clear();
    if(s1.empty()) {
        cout << "string is empty";
    }

    //10.
    string s1 = "harshada";
    s1.erase(3,3);
    cout << s1;

    //11.
    string s1 = "harshada";
    cout << s1.find("sh") << endl;

    //12.
    string s1 = "harshada";
    s1.insert(0,"cute");
    cout << s1;

    //13.
    string s1 = "harshada";
    cout << s1.size() << endl;
    cout << s1.length() << endl;

    for(int i=0; i<s1.length(); i++) {
        cout << s1[i] <<endl;
    }

    //14.
    string s1 = "harshada";
    string s = s1.substr(3,4);
    cout << s;

    //15. string to int
    string s1 = "101";
    int x = stoi(s1);
    cout << x+4 << endl;

    //16. int to string
    int a = 101;
    cout << to_string(a)+"1";

    //17. to sort the string
    string s1 = "harshada";
    sort(s1.begin(), s1.end());
    cout << s1;


    






    return 0;
}