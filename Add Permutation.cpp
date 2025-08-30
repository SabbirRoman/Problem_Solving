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

            for(int i=1; i<k; i++)cout<<i<<" ";
            for(int i=n; i>=k; i--)cout<<i<<" ";
            cout<<endl;
        }
        

        
    
    return 0;
}