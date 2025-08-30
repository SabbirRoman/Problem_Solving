/**
 *    author:  Roman_Emper0r
 *    created: 28.08.2022
**/
#include<bits/stdc++.h>

int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long




int main() {
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif


  
  ll n,q;
  cin>>n>>q;
  multiset<ll>s;
  ll arr[n+1];
  for(int i=1; i<=n; i++)
  {
   ll tmp;
   cin>>tmp;
   arr[i]=tmp;
   s.insert(tmp);
  }
  s.insert(10000000000000);
  while(q--)
  {
   char ch;
   ll a,b;
   cin>>ch>>a>>b;
   if(ch=='?')
   {
      auto it =upper_bound(s.begin(), s.end(),b);
     
      ll ans= s.order_of_key(*it)-s.order_of_key(a) ; 
         
     cout<<ans<<endl;
   }
   else
   {
      s.erase(s.find(arr[a]));
      arr[a]=b;
      s.insert(b);
   }
  }
  }


