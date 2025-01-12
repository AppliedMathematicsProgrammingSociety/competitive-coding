#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    
    /*
    
    cout << s.begin() << endl;
    cout << s.end() << endl; 
    // Will give error 

    s.begin() and s.end() -> a pointer so printing it means printing memory address but the memory address are private so only by deferencing it the value can be accessed

    */

    cout << *s.begin() << endl;
    cout << *(s.end()-1) << endl; 

    // string is a namespace here
    // string :: iterator it <-> auto it
    // after gc++ 11 this auto keyword was introduced so it will not work in gc++ 11 or below compiler
    for (string :: iterator it = s.begin(); it != s.end(); it++)
    {
        // cout << it << endl;
        // will give error as private datas
        
        cout << *it << endl;
    }
    
    
    return 0;
}