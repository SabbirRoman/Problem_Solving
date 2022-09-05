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
    
   ll m=200000,mod=1e9+7;
   std::vector<ll> v[m+1];
   for(int k=0; k<10; k++)
   {
    ll a[10];
    a[k]=1;

   for(int j=1; j<=m; j++)
   {

     ll tmp=a[0],tmp2=a[9],ans=0;
        for(int i=1; i<10; i++)
        {
             swap(tmp,a[i]);
            if(a[i]>mod) a[i]%=mod;
            ans+=a[i];
            //cout<<tmp<<" "<<a[i]<<endl;
        }
        a[0]=tmp2;
       if(a[0]>mod) a[0]%=mod;
        a[1]+=tmp2;
       if(a[1]>mod) a[1]%=mod;
       ans%=(ans+(2*tmp2));

       v[j].push_back(ans);
        
    }
   }
   cout<<v[100][1]<<endl;
  
  


   
  
}