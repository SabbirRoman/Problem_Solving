/**
 *    author:  Roman_Emper0r
 *    created: 28.08.2022
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
       ll a[n],mx=0;
       std::vector<ll> v;
       cin>>a[0];
       mx=a[0];
       for(int i=1; i<n; i++)
       {
        cin>>a[i];
        mx=max(mx,a[i]);
        v.push_back(mx);
       
       }
     

       while(q--)
       {
        ll i,k,p=0;
        cin>>i>>k;
        auto it=lower_bound(v.begin(), v.end(),a[i-1]);
        ll tmp=it-v.begin();
        k=max(p,k-tmp);
        if(a[i-1]==n)cout<<k<<endl;
        else
        {
            auto it1=upper_bound(v.begin(), v.end(),a[i-1]);
           ll tmp2=it1-v.begin();
            tmp2-=tmp;
            cout<<min(k,tmp2)<<endl;
        }
       }
    }
  }


