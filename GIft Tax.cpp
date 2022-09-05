#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
		ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif


ll n,a,b;
cin>>n>>a>>b;

set<ll>s;
ll ans=1e9+1;
for(int i=0; i<n; i++)
{
	ll tmp;
	cin>>tmp;
	ans=min(ans,tmp);
	s.insert(tmp);
}

while(1){
	auto it=s.begin();
	ll tmp1= *it;
ans=max(ans,tmp1);

auto it1=s.end();
it1--;
ll tmp2= *it1;

if((tmp1+a)>(tmp2-b)) break;
else{
	s.erase(s.find(*it));
	s.erase(s.find(*it1));

	ll low=1,hi=(tmp2/b),mid;

	while(low<=hi)
	{
		 mid=(low+hi)/2;
		if((tmp1+(mid*a))==(tmp2-(mid*b)))break;
		else if ((tmp1+(mid*a))>(tmp2-(mid*b)))hi=mid-1;
		else low=mid+1;
	}
	mid--;
tmp1+=(a*mid);
tmp2-=(b*mid);

s.insert(tmp1);
s.insert(tmp2);

cout<<tmp1<<" "<<tmp2<<endl;

}

}
cout<<ans<<endl;



}
