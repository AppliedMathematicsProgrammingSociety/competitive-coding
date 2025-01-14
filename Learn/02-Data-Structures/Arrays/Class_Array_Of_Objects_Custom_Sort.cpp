#include<bits/stdc++.h>
using namespace std;

class CustomSort{
    public:
        char c;
        int cnt;
};

bool cmp(CustomSort a, CustomSort b){
    if(a.cnt > b.cnt) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;

    CustomSort freq[26];
    
    for (int i = 0; i < 26; i++)
    {
        freq[i].c = (i+97);
        freq[i].cnt = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        freq[c-'a'].cnt++;
    }

    sort(freq, freq+26, cmp);
    
    for (int i = 0; i < 26; i++)
    {
        if(freq[i].cnt > 0){
            for (int j = 0; j < freq[i].cnt; j++)
            {
                cout << freq[i].c;
            }
        }
    }
    
    return 0;
}