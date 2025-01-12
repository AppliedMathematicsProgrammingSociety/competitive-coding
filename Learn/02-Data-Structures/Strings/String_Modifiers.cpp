#include<bits/stdc++.h>
using namespace std;

int main(){
    string a="Hello";
    string b="World";

    // a = a+b;
    a+=b;
    // a.append(b);
    cout << a << endl;
    cout << b << endl;
    

    string s="Hello";
    
    s+="R"; // works
    // s[5] = 'R'; -> will not work as size is not increased
    // s.push_back('R'); -> works
    // memory expands and so the character can be pushed to the string 
    cout << s << endl;

    s.pop_back();
    cout << s << endl;

    s = "Gello";
    // s.assign("Gello");
    cout << s << endl;


    string s1 = "Hello World";
    // s1.erase(4); // s1.resize(4)
    s1.erase(4, 1);
    // erase(starting_index, number of characters to erase)
    // This is used to erase a portion of the string

    cout << s1 << endl;

    string s2 = "Hello World";
    s2.replace(4, 3, " Si"); // erase + replace
    // s2.replace(4, 3, "Si"); // at first erase 3 then replaces 2  
    cout << s2 << endl;

    // s2.replace(4, 0, "so");
    // cout << s2 << endl;
    s2.insert(4, "so");
    cout << s2 << endl;
    return 0;
}