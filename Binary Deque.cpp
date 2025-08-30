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
    
   int t=1;
   cin>>t;
   while(t--){
  	  
     int n,s;
     cin>>n>>s;
     int a[n+1];
     a[0]=0;
     for(int i=1; i<=n; i++)
     {
      cin>>a[i];
      a[i]+=a[i-1];
     }
     ll ans=1e9;

     ll i=1,j=1;
     while(i<=n && j<=n){
      ll tmp=a[j]-a[i-1];
      if(tmp==s)
      {
         ans=min(ans,(i-1+n-j));
         //i++;
         j++;
      }
      else if(tmp>s)
      {
         i++;
      }else j++;
     // cout<<ans<<endl;
     }
     //if(a[n]==s)ans=0;
     if(ans==1e9)ans=-1;
     cout<<ans<<endl;

     
     
}
}
