/**
 *    author:  Roman_Emper0r
 *    created: 31.05.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long


int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int t;

    ll fact[100100],mod=1000000007;
    fact[0]=1;
    for(int i=1; i<=1e5; i++)
    {
      fact[i]=fact[i-1]*i;
      fact[i]%=mod;
    }

   cin>>t;

   while(t--){
  	ll ans=0,n;

    cin>>n;

    

    for(int i=1; 2*i<=n; i++)
    {
      ll tmp=n/i;
      tmp--;
      tmp*=(fact[n-2]*((n*(n-1))/2));
      
      ans+=tmp;
      ans%=mod;

    }
    cout<<ans<<endl;

   }
}