#include<bits/stdc++.h>
using namespace std;

// We will use stringstream normally when we have spaces in string
// When we have to do something using words then we will use stringstream

int main(){
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    // Another way without using constructor
    // ss << s;

    string word;

    // ss >> word means that take the first word from ss and put it in the word string
    // After that ss have one word less
    while(ss >> word){
        cout << word << endl;
    }

    return 0;
}