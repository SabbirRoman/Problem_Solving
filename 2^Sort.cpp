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
  	  
     int n,k;
     cin>>n>>k;
   
     bool a[n+1];
     ll tmp;
     cin>>tmp;
     a[0]=true;
     for(int i=1; i<n; i++)
     {
      ll tmp2;
      cin>>tmp2;
      if((tmp/tmp2)>1)a[i]=false;
      else a[i]=true;
      
     }
     bool ans=true;
     ll cnt=0;
     
     for(int i=0; i<=(n-k); i++)
     {
      ans=true;
      for(int j=i; j<(i+k); j++)
      {
         if(a[i]==false){
            i=j;
            ans=false;
            break;
         }
      }
      if(ans)cnt++;
     }
     cout<<cnt<<endl;
     
     
}
}
