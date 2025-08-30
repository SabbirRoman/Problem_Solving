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

 int t;
 cin>>t;
 while(t--)
 {
  ll w,h,ans;
  cin>>w>>h;
  ans=(w/3)*(h/3);

  if(w%3)
  {
    ans+=(h/3);
    
  }
  if(h%3)
  {
    ans+=(w/3);
    
  }
  if(h%3!=0&&w%3!=0)ans++;
  
  cout<<ans<<endl;
 }
}
