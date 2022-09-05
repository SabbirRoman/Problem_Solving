/**
 *    author:  Roman_Emper0r
 *    created: 29.08.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
          
}

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif

    int n;
     cin>>n;
     std::vector<ll> v;
      std::vector<pair<ll,ll>> vp;

      for(int i=0; i<n; i++)
      {
        ll tm,id;
        cin>>tm>>id;
        v.push_back(tm);
        vp.push_back({tm,id});
      }
      vp.push_back({1e15,1e15});
      sort(vp.begin(), vp.end());

      int q;
      cin>>q;
      while(q--)
      {
        ll x;
        cin>>x;
         pair<ll,ll>mypair{x,0};

         auto it = lower_bound(vp.begin(), vp.end(),mypair);
         ll tmp= it-vp.begin();

         ll ans=vp[tmp].second;
         if(tmp>0 && abs(vp[tmp-1].first-x)<=abs(vp[tmp].first-x)) ans=vp[tmp-1].second;
         cout<<ans<<endl;
      }
}


