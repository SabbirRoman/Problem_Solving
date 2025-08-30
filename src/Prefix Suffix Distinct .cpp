/**
 *    author:  Roman_Emper0r
 *    created: 05.06.2022      
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
  while(t--){
   ll n;
   cin>>n;
   ll p[n],sum=0;
   for(int i=0;i<n;i++){
    
    cin>>p[i];
    sum+=p[i];
    
   }
   ll s[n];
   
   ll tmp=0;
   for(int i=0; i<n; i++){
    cin>>s[i];
    tmp+=s[i];
   }
   bool ans=true;

   for(int i=0; i<n-1; i++){
    if(p[i]!=(tmp-s[i]+1))ans=false;
   }
   if(s[n-1]!=(sum-p[n-1]+1))ans=false;
   if(ans)cout<<"YES\n";
   else cout<<"NO\n";

  }
}
