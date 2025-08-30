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

      ll ans=-1,tmp,tmp2=0;

    for(int i=1; i<n-1; i++){
     if(a[i]%2==0){
      ans=i;
      tmp=i;
      break;
     }
     if(a[i]>2)tmp2++;
    }
    
    if(ans==-1){
     if(n==3 || tmp2==0) cout<<ans<<"\n";
     else{
      ans=0;
       for(int i=1; i<n-1; i++){
      ans+=(a[i]/2)+1;
    }
    cout<<ans<<endl;
     }
    }
    else 
    {
      ans=a[ans]/2;
      for(int i=tmp-1; i>0; i--){
        if(a[i]%2==0)ans+=(a[i]/2);
        else ans+=(a[i]/2)+1;
      }
      for(int i=tmp+1; i<n-1; i++){
        if(a[i]%2==0)ans+=(a[i]/2);
        else ans+=(a[i]/2)+1;
      }
      cout<<ans<<endl;
    }
   }
  
  
}

