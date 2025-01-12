#include<bits/stdc++.h>
using namespace std;

int main(){
    int* a = new int[5]; 
    // int a[5]

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int* b = new int[7];

    for (int i = 0; i < 7; i++)
    {
        b[i] = a[i];
    }

    b[5] = 15;
    b[6] = 16;

    for (int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    // delete an array
    delete[] a;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    // Trying to access the array after deletion will give run time error
    
    // In some compilers memory deletion could not also occur instantenously for which those variable could be present for some time

    return 0;
}