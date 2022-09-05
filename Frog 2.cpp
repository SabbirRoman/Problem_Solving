#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll cost[100010],k;
ll dp(int n,ll a[])
{
  
 if(cost[n]!=-1)return cost[n];
  if(n==1)return cost[1];
  
  ll tmp=1e18;
   ll i=1;
   i=max((n-k),i);
  for( i=i; i<n; i++){
    tmp=min(tmp,(dp(i,a)+abs(a[i]-a[n])));
  }

  cost[n]=tmp;
  
  return tmp;

}


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
int n;
cin>>n>>k;
for(int i=1; i<=n; i++)cost[i]=-1;
ll a[n+5];
for(int i=1; i<=n; i++)cin>>a[i];
  cost[1]=0;
  ll ans=dp(n,a);
//for(int i=1; i<=n; i++)cout<<cost[i]<<" ";
cout<<ans<<endl;
}

