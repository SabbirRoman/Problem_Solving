/**
 *    author:  Roman_Emper0r
 *    created: 07-09-2023  20:35:00
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define          sz(a)               (int)a.size()
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define ii pair<int, int>
ll mod;

void solve(){
ll n;
cin>>n;

std::vector<pair<ll,ll>> v;

for(int i=0; i<n;i++)
{
   ll a,b;
   cin>>a>>b;
   v.push_back({a,b});
}
//sort(v.begin(), v.end());
ll ans=10000000;

for(int i=0; i<n; i++)
{
   if(v[i].first==1)
   {
      ll tmp= (v[i].second-1)/2;
      tmp+=1;
      ans= min(ans,tmp);
   }
   else
   {
      ll tmp= (v[i].second-1)/2;
      tmp+=(v[i].first);
      ans= min(ans,tmp);
      
   }
   
}
ll one=1;
cout<<max(one,ans)<<endl;
 
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
      cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


