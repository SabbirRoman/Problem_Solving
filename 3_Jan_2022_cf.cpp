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
  vector<pair<int,int>>v;
  vector<int>cost;
  for(int i=0; i<n; i++)
  { 
    int a,b,c;
    cin>>a>>b>>c;
    v.push_back(make_pair(a,b));
    cost.push_back(c);
  }
  int low=v[0].first,high=v[0].second,low_cost=cost[0],high_cost=cost[0];
  cout<<cost[0]<<endl;
  int tmp=cost[0];

  int a=low;
  int b=high;
  int  total=tmp;
  for(int i=1; i<n; i++)
  { 
    if(low>v[i].first || (low==v[i].first && low_cost>cost[i])){
      low=v[i].first;
      low_cost=cost[i];
    }
     if(high<v[i].second || (high==v[i].second && high_cost>cost[i]))
     {
      high=v[i].second;
      high_cost=cost[i];
     }
     tmp=low_cost+high_cost;
     if(low==v[i].first && high==v[i].second && tmp>cost[i])
      {
        tmp=cost[i];
      }
     if(a<=low && b>=high && tmp>total)tmp=total;
     cout<<tmp<<endl;
     a=low;
     b=high;
     total=tmp;
  }
 }
}

