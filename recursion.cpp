#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main(){
		ios_base::sync_with_stdio(false);cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 

	int t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll ans=2;
		if(n==1 && m==1)ans=0;
		cout<<min(ans,min(n,m))<<endl;
	}

}