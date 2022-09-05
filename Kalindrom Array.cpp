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

		int a[n+5]={0};
		std::vector<int> v,v2;
		for(int i=0; i<n; i++){
			ll tmp;
			cin>>tmp;
			v.push_back(tmp);
			
		}
		int ans=1;
		for(int i=0; i<n; i++){
			if(v[i]!=v[n-(i+1)]){
				ans=0;
				v2.push_back(v[i]);
				v2.push_back(v[n-(i+1)]);
				break;
			}
		}
		if(ans==0){
		for(int i=0; i<v2.size(); i++){
			ans=1;
			int j=0,k=v.size()-1,x=v2[i];
			
			while(j<k){

				while(v[j]==x)j++;
				while(v[k]==x)k--;
				if(j<0 || k<0)break;
				if(v[j]!=v[k]){
					ans=0;
					break;
				}
				j++;
				k--;
			}
			//cout<<x<<" x"<<endl;
			if(ans)break;
		}
	}
		if(ans)cout<<"YES\n";
		else cout<<"NO\n";
	}

}