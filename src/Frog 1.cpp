#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
int n;
cin>>n;
ll a[n+5],cost[n+5];
for(int i=1; i<=n; i++)cin>>a[i];
  cost[1]=0;
  cost[2]=abs(a[1]-a[2]);
for(int i=3; i<=n; i++)
{
  cost[i]=min((cost[i-1])+abs(a[i]-a[i-1]),(cost[i-2]+abs(a[i]-a[i-2])));
}
//for(int i=1; i<=n; i++)cout<<cost[i]<<" ";
cout<<cost[n]<<endl;
} 

