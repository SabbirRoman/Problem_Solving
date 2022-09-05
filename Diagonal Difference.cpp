/**
 *    author:  Roman_Emper0r
 *    created: 16.08.2022
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
  ll a[n][n],sum1=0,sum2=0;
  for(int i=0;i<n; i++)
  {
    for(int j=0;j<n; j++)
    {

      cin>>a[i][j];
      if(i==j)sum1+=a[i][j];
    }
  }
  for(int i=0; i<n; i++)sum2+=a[i][n-(i+1)];
    cout<<abs(sum2-sum1)<<endl;
}
