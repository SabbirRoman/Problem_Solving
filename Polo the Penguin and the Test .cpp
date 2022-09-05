/**
 *    author:  Roman_Emper0r
 *    created: 12.05.2022     
**/
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
  while(t--){
  int n,x;
  cin>>n>>x;
  int price[n+1],pages[n+1],points[n+1];
  for(int i=1; i<=n; i++)cin>>pages[i]>>points[i]>>price[i];
  //for(int i=1; i<=n; i++)cin>>pages[i];

    int dp[n+1][x+1],ans=0;

  for(int i=0; i<=n; i++)
  {
    for(int money=0; money<=x; money++)
    {
      if(i==0 || money==0)dp[i][money]=0;
      else{
         int op1=0,op2=0;
          if(i!=1)op1= dp[i-1][money];
          if(money>=price[i]) op2=(pages[i]*points[i])+dp[i-1][money-price[i]];
          dp[i][money]=max(op1,op2);
          ans=max(ans,dp[i][money]);

      }
    }
  }
  cout<<ans<<endl;
}
}
 