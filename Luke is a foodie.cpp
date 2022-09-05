#include <bits/stdc++.h>

#define ll long long
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
  
int t;
cin>>t;

while(t--)
{
    ll n,x;
    cin>>n>>x;

    std::vector<ll> v;
    for(int i=0; i<n; i++)
    {
        ll tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    ll ans=-1,left=1e9+1, right=-1;

    for(int i=0; i<n; i++)
    {
        ll tmp1=0,tmp2;
        tmp1=max(tmp1,(v[i]-x));
        tmp2=v[i]+x;
        if(tmp2<left || tmp1>right)
        {
            ans++;
            left=tmp1;
            right=tmp2;
        }else
        {
            left=max(left,tmp1);
            right=min(right,tmp2);
        }
    }
    cout<<ans<<endl;

}
 



}