#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
	ll n;
	cin>>n;
	ll a[n+5],b[n+5];
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
		b[i]=a[i];
		
	}
	sort(b+1,b+n+1);
	
		int tm1=1,tm2=1;
		bool ans=true;
		for(int i=1; i<=n; i++){
			if(b[i]!=a[i]){
				tm1=i; break;
			}
		}
		for(int i=n; i>=1; i--){
			if(b[i]!=a[i]){
				tm2=i; break;
			}
		}
		int p=tm1;
		for(int i=tm2; i>=tm1; i--){
			if(a[i]!=b[p]){
				ans=false; break;
			}
			p++;
		}
		
		if(ans)cout<<"yes\n"<<tm1<<" "<<tm2<<endl;
		else cout<<"no\n";
	
}