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
	ll n,ans=0;
	cin>>n;
	ll tmp;
	for(int i=0; i<n-1; i++)
	{
		
		cin>>tmp;
		if(tmp==0 && ans>0)ans++;
		else ans+=tmp;
	}
	cin>>tmp;
	cout<<ans<<endl;
}
}
