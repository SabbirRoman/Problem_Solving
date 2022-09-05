/**
 *    author:  Roman_Emper0r
 *    created: 01.06.2022      
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
    
  ll n,sum;
  cin>>n>>sum;
  ll a[n];
  for(int i=0; i<n; i++)cin>>a[i];

   vector< pair<ll, pair<ll, ll> > > myvec;

  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n; j++)
    {
     myvec.push_back(make_pair((a[i]+a[j]), make_pair(i+1, j+1)));
      
    }
  }
  sort(myvec.begin(),myvec.end());
  
  bool ans=true;
  int len=myvec.size();
  for(int i=0; i<len; i++)
  {
    //cout<<myvec[i].first<<" "<<myvec[i].second.first<<" "<<myvec[i].second.second<<endl;
    ll tmp=sum-myvec[i].first;
    ll hi=myvec.size()-1;
    ll lo=i+1;
    cout<<"hilo\n";
    while(lo<=hi)
    {
      ll mid=(lo+hi)/2;
      ll tmp2=myvec[mid].first;
      ll first=myvec[i].second.first,second=myvec[i].second.second,third=myvec[mid].second.first,forth=myvec[mid].second.second;
      if(tmp2==tmp){
       cout<<"isssh\n";
      }else if(tmp2>tmp){
        hi=mid-1;
      }else lo=mid+1;
    }
    if(ans==false)break;
  }
  if(ans)cout<<"IMPOSSIBLE\n";
  
}
