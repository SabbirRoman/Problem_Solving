#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
int n,weights;
cin>>n>>weights;
ll w[n+5],value[n+5],dp[weights+5];
dp[0]=0;
for(int i=1; i<=weights; i++)dp[i]=-1;
for(int i=1; i<=n; i++)cin>>w[i]>>value[i];
 
 for(int i=1; i<=n; i++)
 {

  for(int j=weights-w[i]; j>=0; j--)
  {
    if(dp[j]!=-1)
    {
      dp[j+w[i]]=max(dp[j+w[i]],(dp[j]+value[i]));
    }
  }
 }
 ll ans=0;
 for(int i=0; i<=weights; i++)ans=max(ans,dp[i]);
  cout<<ans<<endl;


} 

