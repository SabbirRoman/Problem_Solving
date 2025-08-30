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
    
      int n,x;
      cin>>n>>x;

      ll coin[n];
      for(int i=0; i<n; i++)cin>>coin[i];

      ll sum[x+1];
      for(int i=0; i<=x; i++)sum[i]=0;

      sum[0]=1;
        sort(coin,coin+n);
      for(int j=0; j<=x; j++)
      {
        
         for(int i=0; i<n; i++){
             int tmp=coin[i];
            if(j+tmp<=x){
           if(sum[j]!=0) sum[j+tmp]++;
            sum[j+tmp]%=10000000007;
         }
         }
      }
      cout<<sum[x]<<endl;
      //for(int i=0; i<=x; i++)cout<<i<<" "<<sum[i]<<endl;

     
     
}

