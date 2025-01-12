#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

int main(){
    Student s[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
        cin.ignore();
    }

    Student mx;
    mx.marks=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if(mx.marks < s[i].marks){
            mx.name = s[i].name;
            mx.roll = s[i].roll;
            mx.marks = s[i].marks;
        }
    }

    cout << "Maximum marks is obtained by " << mx.name << " Roll: " << mx.roll << " Marks: " << mx.marks << endl;

    Student mn;
    mn.marks=INT_MAX;
    
    for (int i = 0; i < 3; i++)
    {
        if(mn.marks > s[i].marks){
            mn.name = s[i].name;
            mn.roll = s[i].roll;
            mn.marks = s[i].marks;
        }
    }

    cout << "Minimum marks is obtained by " << mn.name << " Roll: " << mn.roll << " Marks: " << mn.marks;
    
    return 0;
}