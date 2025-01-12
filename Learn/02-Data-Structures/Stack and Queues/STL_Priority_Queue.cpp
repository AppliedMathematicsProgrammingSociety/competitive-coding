#include<bits/stdc++.h>
using namespace std;

/*

Priority Queue:
-> Priority & First In First Out
-> Internally uses heap
-> max or min heap have the top most value ( binary tree ) as largest or smallest so top is used here 

*/

int main(){
    priority_queue<int> pq; // follows max heap

    priority_queue< int, vector<int>, greater<int> > pq; 
    // follows min heap
    // greater<int> is a class here not a function so () is not used
    // < > for greater cannot contain any class only default data types can be given for using class a custom compare class has to be implemented

    while(true){
        int c;
        cin >> c;
        if(c==0){
            int x;
            cin >>x;
            pq.push(x); // O(logN)
        }
        else if(c==1){
            pq.pop(); // O(logN)
        }
        else if(c==2){
            cout << pq.top() << endl; // O(1)
        }
        else break;
    }
    return 0;
}