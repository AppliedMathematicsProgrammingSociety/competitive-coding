#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
       
};

int main(){
    Student s[3];
    // we cannot use constructor if we create array of objects as objects have to be initialized first

    for (int i = 0; i < 3; i++)
    {
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
        // getline takes enter as an input after s[i].marks so we have to use cin.ignore() or getchar()
        cin.ignore();
    }

    for (int i = 0; i < 3; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }
    
    
    return 0;
}