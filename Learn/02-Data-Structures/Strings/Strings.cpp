#include<bits/stdc++.h>
using namespace std;

/*

String -> Dynamic Array

*/

// In C:

    /* char str[10] = "Hello";
       cout << str;
    
    // str = "Gello"; (Cannot do it) 
    // strcpy(str, "Gello") ( This can be done but the string doesn't occupies space so it is a bit weird to this way)
    
    char temp[] = "Gello";
    strcpy(str, temp);
    
    */

    /* char str1[] = "Hello";
       char str2[] = "Gello";
    
       if(strcmp(str1, str2) == 0){
            cout << "Same" << endl;
       }
       else{
            cout << "Not Same" << endl;
       }
    
    */

// In C++

/*
    string str = "Gello";
    str = "Hello";
    cout << str << endl;

*/

/*
    string str1 = "Hello";
    string str2 = "Gello";
    if(str1 == str2){
        cout << "Same";
    }
    else{
        cout << "Not Same";
    }
*/


int main(){
    string str1 = "Hello";
    string str2 = "Hello";
    if(str1 == str2){
        cout << "Same";
    }
    else{
        cout << "Not Same";
    }

    return 0;
}