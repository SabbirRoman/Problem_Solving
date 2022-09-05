/**
 *    author:  Roman_Emper0r
 *    created: 15.08.2022
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
  ll sum=0,ans=0;
  priority_queue<ll, vector<ll>, greater<ll> > pq;
  for(int i=0; i<n; i++)
  {
    ll tmp;
    cin>>tmp;
    sum+=tmp;
    pq.push(tmp);
    ans++;

    if(sum<0)
    {
        sum-=pq.top();
        pq.pop();
        ans--;

    }


  }
  cout<<ans<<endl;
}
