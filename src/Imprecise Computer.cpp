/**
 *    author:  Roman_Emper0r
 *    created: 14.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll ans=1;
void Nirvana(ll n, ll tmp, ll res, bool flag)
{
    ans=max(ans,res);
    if(tmp==0) return;
    
    if(flag)
    {
        res*=9;
        n%=tmp;
        tmp/=10;
        Nirvana(n,tmp,res,1);
    }
    else
    {
        ll p=n/tmp;
        n%=tmp;
        tmp/=10;
       ll res2= res*p;
       Nirvana(n,tmp,res2,0);
       if(p!=1) p--;
       ll res1=res*p;
       Nirvana(n,tmp,res1,1);
       
    }
    
}
void solve()
{
    ll n;
    cin>>n;
    
    ll max_sum=(n-3)*2 + (4*n)-8,sum=0;
    for(int i=0; i<n; i++)
    {
        ll tmp;
        cin>>tmp;
        sum+=tmp;
    }
    if(sum%2==0 && sum<=max_sum) cout<<"YES\n";
    else cout<<"NO\n";


}



int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif


  int t=1;

  //cin>>t;

  while(t--)
  {
    solve();
  }


}


