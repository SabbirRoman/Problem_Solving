#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
   ll n,k;
   cin>>n>>k;
   std::vector<ll> v;
   ll sum=0;
   for(int i=0; i<n; i++)
   {
      ll tmp;
      cin>>tmp;
      v.push_back(tmp);
      sum+=tmp;
   }
   if(k>=sum){
      cout<<"0"<<endl;
      return;
   }
   ll ans=sum-k;
   sort(v.begin(), v.end());
   vector<ll>v2;
   v2.push_back(v[0]);
   for(int i=1; i<v.size(); i++)v2.push_back((v[i]+v[i-1]));
      int cnt=0;
      for(int i=v.size()-1; i>=1; i--){
         cnt++;
         ll tmp=(v2[i-1]-v2[0]);
        
          tmp=abs(k-tmp);
         tmp/=(cnt+1);
         tmp=abs(tmp-v[0])+cnt;
         ans=min(ans,tmp);
        
      }
      cout<<ans<<endl;

}
int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
   int t; cin>>t;
   while(t--)
   {
      solve();
   }
}

