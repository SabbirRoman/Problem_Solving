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
    if(n<10)
    {
        cout<<n<<endl;
        return;
    }  
    ll tmp=1,res=1;

    while(tmp<=n)tmp*=10;

    tmp/=10;
    bool flag=false;
    Nirvana(n,tmp,res,flag);

    cout<<ans<<endl;

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


