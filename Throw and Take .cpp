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
    
  int t;
  cin>>t;
  while(t--){
   ll n;
   cin>>n;
   ll a[n],tmp=0;
   for(int i=0;i<n;i++){
    
    cin>>a[i];
   
   }
   std::vector<ll> v;
   for(int i=0; i<n; i++){
    cin>>tmp;
    if(a[i]%2)v.push_back(tmp);
   }
   tmp=0;
   for(int i=v.size()-1; i>=0; i--){
    if((v[i]-tmp)>tmp)tmp=v[i]-tmp;
   }
   cout<<tmp<<endl;
   
  }
}
