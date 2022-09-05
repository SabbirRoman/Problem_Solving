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

	ll n;
	cin>>n;
	std::vector<ll> v;
	ll sum=0;
	for(int i=0; i<n; i++){
		ll tmp;cin>>tmp;
		sum+=tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	ll m;
	cin>>m;
	for(int i=0; i<m; i++){
		ll a,b;
		cin>>a>>b;
		
		vector<ll>::iterator upper;
		ll p=0,q=m,mid;
		ll tmp2=0;
		ll ans1,ans2,ans=9223372036854775807;
		upper=upper_bound(v.begin(),v.end(),a);
		ll low=upper-v.begin();
		if(low==n)  low=n-1;
		else{
			 ans1=max(tmp2,a-v[low]);
		 ans2=max(tmp2,(b-sum+v[low]));
		 ans=ans1+ans2;
			for(int j=low; j>=0;j--)if(v[j]<=a){
				low=j; break;
			}
		}
		
		
		 ans1=max(tmp2,a-v[low]);
		 ans2=max(tmp2,(b-sum+v[low]));
		
		
		
		
		cout<<min(ans,ans1+ans2)<<endl;
		
	}
	

	
	

}