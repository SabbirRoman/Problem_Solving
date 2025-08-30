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
	ll n,c,q;
	cin>>n>>c>>q;
	string s;
	cin>>s;

	std::vector<ll> v1,v2;

	v1.push_back(1);
	v2.push_back(1);

	v1.push_back(n);
	v2.push_back(n);

	for(int i=0; i<c; i++)
	{
		ll tmp1,tmp2;
		cin>>tmp1>>tmp2;
		ll sz=v1.size()-1;
		v1.push_back(v1[sz]+1);
		v1.push_back(v1[sz+1]+(tmp2-tmp1));

		v2.push_back(tmp1);
		v2.push_back(tmp2);

	}

	while(q--)
	{
		ll tmp;
		cin>>tmp;
		while(1)
		{
			auto it= upper_bound(v1.begin(), v1.end(),tmp);
			it--;
			ll p=it-v1.begin();
			tmp=v2[p]+(tmp-v1[p]);
			if(tmp<=n)break;
		}
		cout<<s[tmp-1]<<endl;
	}
}
}
