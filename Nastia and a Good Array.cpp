/* Smile! It's sunnah  */

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
		ll n;
		cin>>n; 
		ll a[n+5];
		ll tmp=1e10,index;
		for(int i=1; i<=n; i++){
			cin>>a[i];
			if(tmp>a[i]){
				index=i;
				tmp=a[i];
			}
		}
		cout<<n-1<<endl;
		for(int i=index+1; i<=n; i++){
			cout<<index<<" "<<i<<" "<<tmp<<" "<<tmp+i-index<<endl;
		}
		for(int i=index-1; i>=1; i--){
			cout<<index<<" "<<i<<" "<<tmp<<" "<<tmp+index-i<<endl;
		}
	}
	
}