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
  while(t--){
   ll n;
   cin>>n;
   std::vector<pair<int,int>> v;
   int ans=1;
   int ar[n+5]={0};
   for(int i=0; i<n-1; i++)
   {
      int a,b;
      cin>>a>>b;
      v.push_back(make_pair(a,b));
      ar[a]++;
      ar[b]++;
      //cout<<ar[a]<<" "<<ar[b]<<endl;
      if(ar[a]>2 || ar[b]>2)ans=-1;
   }
   if(ans<0)cout<<ans;
   else{
   for(int i=0; i<n-1; i++)
   {
      if(ar[v[i].first]==100 || ar[v[i].second]==100){
         cout<<"5 ";
      }else{
         cout<<"2 ";
         ar[v[i].first]=100;
         ar[v[i].second]=100;
      }
   }
}
   cout<<endl;
  }

  
}

