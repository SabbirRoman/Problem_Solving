/**
 *    author:  Roman_Emper0r
 *    created: 25.08.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long




int main() {
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif

   int n;
   cin>>n;

  ll a[n+1][2];
  a[0][0]=0;
  a[0][1]=0;
  

  for(int i=1; i<=n; i++ )
  {
  	cin>>a[i][0];
  }

  for(int i=1; i<=n; i++ )
  {
  	cin>>a[i][1];
  }


  for(int i=2; i<=n; i++ )
  {
  	
  	a[i][0]+=max(a[i-1][1],a[i-2][1]);

  	a[i][1]+=max(a[i-1][0],a[i-2][0]);
  }

  cout<<max(a[n][0],a[n][1])<<endl;


  
  }


