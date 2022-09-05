
/**
 *    author:  Roman_Emper0r
 *    created: 23.05.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    int t;
    cin>>t;
    while(t--)
    {
    	ll n,m;
        cin>>n;
        ll mx=0,a[n+5];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        cin>>m;
        for(int i=0; i<m; i++){
            ll tmp;
            cin>>tmp;
            mx+=tmp;
        }
       mx+=n;
       cout<<a[mx%n]<<endl;

	}
}