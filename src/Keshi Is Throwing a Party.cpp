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
	std::vector<pair<int,int>> v;
	std::vector<int> v1,v2;
	int cnt=0,richer=n-1,poorer=0;
	for(int i=0 ; i<n; i++){
		int a,b;
		cin>>a>>b;
		v1.push_back(a);
		v2.push_back(b);
	}
	int ans=n;
	while(ans!=0){
		int cnt1=ans-1,cnt2=0,x=0;
		for(int i=0; i<n; i++){
			if(v1[i]>=cnt1 && v2[i]>=cnt2){
				x++; cnt2++;
			}
			cnt1--;
			if(ans>(x+n-(i+1)))break;
			if(x==ans)break;
		}
		//cout<<x<<" "<<ans<<endl;
		if(x==ans)break;
		ans--;
	}
	cout<<ans<<endl;
	}

}