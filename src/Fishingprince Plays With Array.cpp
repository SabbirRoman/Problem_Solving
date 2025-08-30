/**
 *    author:  Roman_Emper0r
 *    created: 12.06.2022      
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
    
 int t;
 cin>>t;
 while(t--)
 {
   ll n,m;
   cin>>n>>m;
   std::vector<pair<ll,ll>> v1;
   for(int i=0; i<n; i++){
      ll tmp,tmp2=1;
      cin>>tmp;
      while(tmp%m==0)
      {
         tmp2*=m;
         tmp/=m;
      }
      v1.push_back({tmp,tmp2});
   }

   ll k;
   cin>>k;
   vector<pair<ll,ll>>v2;
   for(int i=0; i<k; i++)
   {
      ll tmp,tmp2=1;
      cin>>tmp;
      while(tmp%m==0)
      {
         tmp2*=m;
         tmp/=m;
      }
      v2.push_back({tmp,tmp2});
   }

      ll ans=1,i=0,j=0;
   while((i<n)&&(j<k)&&ans)
   {
      if(v1[i].first!=v2[j].first)
      {
         ans=0;
         break;
      }
      else
      {
         ll tmp=min(v1[i].second,v2[j].second);
         v1[i].second-=tmp;
         v2[j].second-=tmp;
      }
      if(v1[i].second==0)i++;
      if(v2[j].second==0)j++;
     
   }
   if(i!=n || j!=k)ans=0;
   
   if(ans)cout<<"YES\n";
   else cout<<"NO\n";
 }
}
