
/**
 *    author:  Roman_Emper0r
 *    created: 08.04.2022     
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
while(t--)
{
  int n;
  cin>>n;
  ll sum=0,a[n+5];
  for(int i=1; i<=n; i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  ll target=sum/2;
  ll dp[target+5];
  dp[0]=1;

  for(int i=1; i<=target; i++)dp[i]=0;

  for(int i=1; i<=n; i++)
  {
    for(int j=target-a[i]; j>=0; j--)
    {
      if(dp[j])dp[j+a[i]]=1;
    }
  }
  for(int i=target; i>=0; i--)
  {
    if(dp[i]){
      cout<<sum-i<<endl;
      break;
    }
  }
}
}

