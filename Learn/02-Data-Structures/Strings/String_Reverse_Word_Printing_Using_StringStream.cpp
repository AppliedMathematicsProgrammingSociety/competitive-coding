#include<bits/stdc++.h>
using namespace std;

// In c++ instead of pointer we can also use reference variable

// For stringstream we have to use reference variable or pointer
void printReverse(stringstream& ss){
    string word;

    if(ss >> word){
        printReverse(ss);
        cout << word << endl;
    }
    
    return;
    
}
int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);

    printReverse(ss);

    return 0;
}