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

        int n,j,k;
        cin>>n>>j>>k;
        vector<int> v;
        int temp;
        for(int i=0; i<n; i++){
            int tmp;
          cin>>tmp;
             if(i+1 == j) temp = tmp;
            v.push_back(tmp);
        }

        sort(v.begin(),v.end());
        int pos;
        for(int i=0; i<n; i++){
            // cout<<v[i].first<<" "<<v[i].second<<endl;
            if(temp== v[i]){
                pos = i+1;
                // break;
            }
        }
        if(k>1) cout<<"YES"<<endl;
        else{
            if(pos == n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        

        
    }
    return 0;
}