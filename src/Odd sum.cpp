/**
 *    author:  Roman_Emper0r
 *    created: 24.08.2022
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

   int n;
   cin>>n;

   ll sum=0;

   multiset<ll>s;

   for(int i=0; i<n; i++)
   {
    ll tmp;
    cin>>tmp;

    if(abs(tmp)%2==0)
    {
        if(tmp>0) sum+=tmp;
    }
    else
    {
        sum+=tmp;
        s.insert(tmp);
    }
   }
   ll ans=-1e9;
    if(abs(sum)%2==1)
    {
        ans=max(ans,sum);
    }
   for(auto x: s)
   {
    sum-=x;
    
    if(abs(sum)%2==1)
    {
        ans=max(ans,sum);
    }
   }
   cout<<ans<<endl;
  
  }


