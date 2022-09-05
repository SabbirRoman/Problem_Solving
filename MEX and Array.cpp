#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[110];
 ll mex(int i, int j)
 {
   ll ans=0;
  int b[j-i+3]={0};
  for(int k=i; k<=j; k++){
    if(a[k]==0)ans++;
  }
 
  /*for(int k=0; k<=(j-i+1); k++)if(b[k]==0){
    ans=k;
    break;
  }*/
  //cout<<ans<<endl;
  return ans;
 }

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
    
    for(int i=1; i<=n; i++)cin>>a[i];
      ll ans=0;
      for(int i=1; i<=n; i++)
      {
        for(int j=i; j<=n; j++){
          ans+=(j-i+1)+mex(i,j);
        }
      }
      cout<<ans<<endl;
  }
  
}

