/**
 *    author:  Roman_Emper0r
 *    created: 16.08.2022
**/
#include<bits/stdc++.h>

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
    int n; cin>>n;

    std::vector<pair<int,int>> v;

    for(int i=0; i<n; i++)
    {
      int a,b;
      v.push_back({a,b});
    }
    sort(v.begin(), v.end());
    double ans=v[0].second,tmp=v[0].second,index=0;

    for(int i=1; i<n; i++)
    {
      if(v[i].second<tmp)
      {
        double p=v[index].second-v[i].second, q=v[i].first-v[index].first;
        p= atan(p/q);
        

      }
      else
      {
        tmp=v[i].second;
        index=i;
      }
    }

  }
}
