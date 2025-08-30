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
	int n,x;
	cin>>n>>x;

	ll a[2*n];
	for(int i=0; i<2*n; i++)cin>>a[i];

		bool ans=true;
	sort(a,a+(2*n));
		for(int i=0; i<n; i++)if(a[i]+x>a[i+n])ans=false;

			if(ans)cout<<"YES\n";
			else cout<<"NO"<<endl;
}
}
