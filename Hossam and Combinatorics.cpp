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
    while (test--){

        int n;
        cin>>n;
        std::vector<int> v(n);
        
        for(int i=0; i<n; i++) cin>>v[i];

        sort(v.begin(),v.end());
        
        ll small_cnt = 1, large_cnt = 1;

        for(int i = 1; i<n; i++){
            if(v[i] > v[i-1]) break;
            small_cnt++;
        }

        for(int i=n-1; i>0; i--){
            if(v[i] > v[i-1]) break;
            large_cnt++;
        }
        ll ans = small_cnt*large_cnt;

        if(v[0]==v[n-1]){
            ans = 0;
            for(int i=1; i<n; i++) ans += i;
        }


        cout<< ans*2 <<endl;
    }
    return 0;
}