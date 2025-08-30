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
		int n;
		cin>>n;
		string s;
		cin>>s;
		bool ans=1;
		for(int i=0; i<(n/2); i++){
			int tmp=abs(s[i]-s[n-(i+1)]);
			if(tmp!=0 && tmp!=2){
				ans=false; break;
			}
		}
		if(ans)cout<<"YES\n";
		else cout<<"NO\n";
	}
	
}