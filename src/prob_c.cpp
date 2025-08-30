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

        int n;
        cin>>n;
        vector<int> v(n), mini(n), maxi(n);
        int mn = INT_MAX, mx = INT_MIN;
        int temp;
        for(int i=0; i<n; i++){
            int tmp;
          cin>>v[i];
            mn = min(v[i], mn);
             mini[i] =mn;
        }

        for(int i=n-1; i>=0; i--){
            mx = max(v[i], mx);
            maxi[i] = mx;
        }

        string s;

        for(int i=0; i<n; i++){
            // cout<<v[i]<<" "<<mini[i]<<" "<<maxi[i]<<endl;
            if(v[i]==mini[i] || v[i]==maxi[i]) s+='1';
            else s+='0';
        }
        
        cout<<s<<endl;
        

        
    }
    return 0;
}