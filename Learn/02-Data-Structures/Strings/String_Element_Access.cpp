#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Hello_World";
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl;

    cout << s[s.size() - 1] << endl;
    cout << s.at(s.size() - 1) << endl;
    cout << s.back() << endl;

    // So we better use
    /*
        s[0] -> for front element
        s.back() -> for last element
    */

   
    return 0;
}