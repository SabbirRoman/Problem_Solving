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
  int n,q;
  cin>>n>>q;

  ll a[n],sum=0;
  for(int i=0;i<n; i++)cin>>a[i];
  sort(a,a+n);

  std::vector<ll> v;
  for(int i=0; i<n; i++)
  {
    sum+=a[n-i-1];
    v.push_back(sum);
  }
  while(q--)
  {
    ll tmp;
    cin>>tmp;
    auto it= lower_bound(v.begin(), v.end(), tmp);

    if(it==v.end())cout<<"-1"<<endl;
    else
    {
      tmp=it-v.begin();
      cout<<tmp+1<<endl;
    }

  }
 }
}
