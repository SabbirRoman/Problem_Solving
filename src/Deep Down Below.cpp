#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int t;
   cin>>t;
   while(t--)
   {
      int n; 
      cin>>n;
      std::vector<pair<ll,ll>> v;
      for(int i=0; i<n; i++)
      {
         int k;
         cin>>k;
         ll a[k+5],tmp=0;
         for(int j=1; j<=k; j++)
         {
            cin>>a[j];
            tmp=max(tmp,((a[j]+1)-(j-1)));
         }
         v.push_back(make_pair(tmp,k));
      }
      sort(v.begin(), v.end());
    //  for(int i=0; i<v.size(); i++)cout<<v[i].first<<" "<<v[i].second<<endl;
      int ans=v[0].first,extra_power=v[0].second;

      for(int i=1; i<v.size(); i++){
         if(v[i].first>(ans+extra_power))ans+=(v[i].first-(ans+extra_power));
         extra_power+=v[i].second;
      }
      cout<<ans<<endl;
   }

  
  
}

