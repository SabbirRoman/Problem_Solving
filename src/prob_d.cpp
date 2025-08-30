/*
    author: Roman_Emper0r
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    ll test;
    cin >> test;
    while (test--) {

        int n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        int cnt_one =0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') cnt_one++;
        }

        if(cnt_one <= k) cout<<"Alice"<<endl;
        else if(n/k < 2) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;

        
    }
    return 0;
}