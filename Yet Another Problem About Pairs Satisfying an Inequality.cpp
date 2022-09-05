/**
 *    author:  Roman_Emper0r
 *    created: 12.07.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




int main() 
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int t;
  cin>>t;
 
  while(t--)
  {
    ll n;
    cin>>n;

    std::vector<pair<ll,ll>> v;

    std::vector<ll> vect;

    for(int i=1; i<=n; i++)
    {
      ll tmp;
      cin>>tmp;
      if(i>tmp)
        {
          v.push_back({tmp,i});
          vect.push_back(tmp);
        }
    }
    
    sort(vect.begin(), vect.end());
    
    ll ans=0;
    n=vect.size();
    for(int i=0; i<n; i++)
    {
       ll tmp=v[i].second;
      
     
      auto upp = upper_bound(vect.begin(), vect.end(), tmp);
      n=vect.size();
      tmp=upp-vect.begin();
     
      tmp=n-tmp;

      ans+=tmp;

    }

    cout<<ans<<endl;
  }
}


