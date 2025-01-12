#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    
    /*

    int x;
    cin >> x;
    
    // cin >> s;
    // getline(cin, s); 

   // getline will take enter as input if cin is before but it does not take the enter after a string so if a string doesn't have space then we should take the string as input using cin in cases such like the above case 

   
   */

   
   // Solution for this 

   
   /* 

    int x;
    char c;
    cin >> x >> c;

    // Now we see another new problem
    // Before the new line was taken input by getline but now the first character of the string is taken input by the variable c

    getline(cin, s);
    
    
    */

    int x;
    cin >> x;
    cin.ignore();
    // getchar();
    // scanf("\n");

    getline(cin, s);
    cout << s << endl;
    cout << s.size() << endl;

    return 0;
}