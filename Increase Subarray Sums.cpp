#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int t;
   cin>>t;
   while(t--)
   {
      int n,x; 
      cin>>n>>x;
      ll a[n+5];
      ll ans=0,tmp=0,tmp2=0;
      int range=0,r=0;
      a[0]=0;
      for(int i=1; i<=n; i++)
      {
         cin>>a[i];
         tmp2+=a[i];
         a[i]+=tmp;
         tmp=a[i];
         r++;
         if(tmp2<0){
            tmp2=0;
            r=0;
         }
         if(ans<=tmp2){
            ans=tmp2;
            range=r;
         }
        
      }
      cout<<ans<<" ";
      
      for(int i=1; i<=n; i++)
      {
         tmp=0;
         ll sum=0;
         for(int j=i; j<=n; j++)
         {
            ll p=a[j]-a[tmp]+(i*x);
            sum=max(sum,p);
            tmp++;
         }
         tmp=min(range,i);
         tmp=ans+(tmp*x);
        // sum+=(i*x);
         if(sum>tmp){
            range=i;
            ans=sum-(i*x);
         }
        // cout<<range<<endl;
        // cout<<tmp<<" "<<sum<<endl;
         cout<<max(sum,tmp)<<" ";
         
      }
      cout<<"\n";
   }

  
  
}

