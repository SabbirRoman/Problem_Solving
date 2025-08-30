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

  int t;
  cin>>t;

  while(t--)
  {
  ll n,x; 
  cin>>n>>x;

  ll a[n];
  for(int i=0; i<n; i++)cin>>a[i];

    sort(a,a+n);
int cnt=0,ans=0;
for(int i=n-1; i>=0; i--)
{
    cnt++;
    if(a[i]*cnt>=x)
    {
        ans++;
        cnt=0;
    }
}
cout<<ans<<endl;

  }
 

  
  }


