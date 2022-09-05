#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
ll n;
cin>>n;
 std::vector<pair<ll,ll>> v;
vector<ll>v1,v2;
for(int i=0; i<n; i++)
{
  ll a,b;
  cin>>a>>b;
  
  v1.push_back(a);
  v2.push_back(b);

}
sort(v1.begin(), v1.end());
sort(v2.begin(), v2.end());
ll ans=0;
for(int i=0; i<n; i++)
{
  ll tmp=v2[i];
  vector<ll>::iterator upper1, upper;
    upper1 = upper_bound(v1.begin(), v1.end(), tmp);
    upper = lower_bound(v2.begin(), v2.end(), tmp);
    tmp=(upper1-v1.begin())-(upper-v2.begin());
    ans=max(ans,tmp);

}
cout<<ans<<endl;
}

