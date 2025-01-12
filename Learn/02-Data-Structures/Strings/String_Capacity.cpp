#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Hello World";
    cout << s.max_size() << endl;
    // online compiler -> 10^6
    
    cout << s.size() << endl;
    cout << s.capacity() << endl;

    s = "Hello Testing Capacity Function!";

    // Capacity is the current holding capacity of a string which changes dynamically as string size increased or decreased

    cout << s.capacity() << endl;
    cout << s.size() << endl;

    s.clear();
    cout << s << endl;
    cout << s.size() << endl;
    cout << s.capacity() << endl;

    if(s.empty() == true){
        // s.size() == 0
        cout << "String is empty" << endl;
    }
    else{
        cout << "String is not empty!" << endl;
    }

    string s1 = "Hello_World";
    // cin >> s1;
    cout << s1 << endl;
    s1.resize(5);
    cout << s1 << endl;
    s1.resize(8, 'R');
    cout << s1 << endl;
    // "This character is only implemented when size is increased"
    s1.resize(4, 'R');
    cout << s1 << endl;
    

    return 0;
}