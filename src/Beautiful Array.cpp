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


  int t;
  cin>>t;
  while(t--)
  {
    ll n,k,b,s;
    cin>>n>>k>>b>>s;

    bool ans=true;

    if((b*k)>s)cout<<"-1"<<endl;
    else
    {
      if((b*k)+(n*(k-1))<s)cout<<"-1"<<endl;
      else
      {
        cout<<min(s,(b*k)+(k-1))<<" ";
        s-=min(s,(b*k)+(k-1));
        n--;
        for(int i=n; i>0; i--)
        {
          cout<<min(s,(k-1))<<" ";
          s-=min(s,(k-1));
        }
        cout<<endl;
      }
    }
  }

}
