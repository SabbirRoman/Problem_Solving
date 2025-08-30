
/**
 *    author:  ROMAN_EMPEROR
 *    created: 27.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int a[32768+5];
int dp(int n)
{ 
  int cnt=0;
  while(1)
  {
    n=n%32768;
    if(n==0) return cnt;
    n*=2;
    cnt++;
  }
 
}

  void solve()
  {
   int n;
   cin>>n;
   
   int tmp=32768,cnt=0;
   /*for(int i=1; i<tmp; i++)a[i]=-1;
    while(tmp>0)
    {
      a[tmp]=cnt;
      cnt++;
      tmp/=2;
    }
   a[0]=0;
   a[32768]=0;*/
   
   for(int i=0; i<n; i++)
   {
    cin>>tmp;
    int ans=15;
    for(int j=0; j<=15; j++)
    {
      ans=min(ans,dp(tmp+j)+j);
    }
   // a[tmp]=ans;
    cout<<ans<<" ";
   }
   cout<<endl;
  }

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
   solve();
}

