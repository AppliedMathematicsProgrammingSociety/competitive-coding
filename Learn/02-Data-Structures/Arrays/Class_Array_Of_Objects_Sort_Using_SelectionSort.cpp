#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b){
    if( a.marks < b.marks) return true;
    // true means it is already in right place
    else return false;
}

int main(){
    Student s[3];

    for (int i = 0; i < 3; i++)
    {
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].marks;
        cin.ignore();
    }   

    // Sort Using Selection Sort

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = i+1; j < 3; j++)
    //     {
    //         if(s[i].marks > s[j].marks){
    //             swap(s[i], s[j]);
    //         }
    //     }
    // }

    // Using Sort function
    sort(s, s+3, cmp);

    for (int i = 0; i < 3; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " <<  s[i].marks << endl;
    }
    


    
    return 0;
}