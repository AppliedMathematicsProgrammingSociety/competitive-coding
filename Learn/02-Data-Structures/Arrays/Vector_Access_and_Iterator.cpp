#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1,2,3,4,5};
    // cout << v[v.size()-1];
    cout << v.back() << endl;
    cout << v[0] << endl;
    // cout << v.front();

    for (auto it = v.begin(); it<v.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}