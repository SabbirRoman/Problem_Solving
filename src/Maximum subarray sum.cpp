/**
 *    author:  Roman_Emper0r
 *    created: 01.06.2022      
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
   ll a[n],ans=-1e9;
   for(int i=0; i<n; i++){
    cin>>a[i];
    ans=max(a[i],ans);
   }
   if(ans<1)cout<<ans<<endl;
   else{
     ll cnt=0;

     for(int i=0; i<n; i++){
      cnt+=a[i];
      if(cnt<0)cnt=0;
      ans=max(ans,cnt);
     }
     cout<<ans<<endl;
   }
  

}
