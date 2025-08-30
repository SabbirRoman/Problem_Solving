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

        long long n;
        cin>>n;
        std::vector<long long> v(n);

        for(int i=0; i<n; i++) cin>>v[i];

        long long left_min = v[0];
        bool flag = true;

        for(int i=1; i<n;i++){
            if(left_min*2 <= v[i]){
                flag = false;
            }
            left_min = min(left_min, v[i]);
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        
    }
    return 0;
}