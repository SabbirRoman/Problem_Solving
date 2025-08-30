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
      ll n;
      cin>>n;
      ll a[n+5];
      for(int i=0; i<n; i++)cin>>a[i];
         int ans=0;
         for(int i=1; i<n; i++)if(a[i]<a[i-1])ans=1;
            if(ans==0)cout<<ans<<endl;
         else{
         int ans=n-2;
      if(a[n-1]<a[n-2])ans=-1;
      else if(a[n-1]<0){
         for(int i=0; i<n; i++){
            if(a[i]>a[n-2]){
               ans=-1;
               break;
            }
         }
      }
      cout<<ans<<endl;
    if(ans!=-1)  for(int i=1; i<n-1; i++)cout<<i<<" "<<n-1<<" "<<n<<endl;
}
   }

  
  
}

