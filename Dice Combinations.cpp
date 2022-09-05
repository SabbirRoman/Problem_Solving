
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll memo[1000010]={0},tmp2=(1e9)+7,ans=0;

ll dp(ll n)
{
	if(n<=0) return 0;
	if(n==1)return 1;
	if(memo[n]!=0)return memo[n];
	ll p=dp(n-1)+dp(n-2)+dp(n-3)+dp(n-4)+dp(n-5)+dp(n-6);
	if(p>tmp2)p=p%tmp2;
	memo[n]=p;
	return p;
}
int main()
{
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
	ll n;
	cin>>n;
	dp(n+1);
	
	cout<<memo[n+1]<<endl;


}
