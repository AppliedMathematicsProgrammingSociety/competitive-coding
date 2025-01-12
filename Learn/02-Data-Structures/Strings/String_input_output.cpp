#include<iostream>
using namespace std;

int main(){
    char str[100];
    // cin >> str;
    // space will not be taken as input
    // cout << str;

    cin.getline(str, 100);
    /*
        In C we use,
        fgets(str, 100, stdin)

        This takes enter as input so in output it also prints new line but in c++ getline do not take the enter as input
    */
    cout << str;

    return 0;
}