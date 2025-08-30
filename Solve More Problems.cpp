/**
 *    author:  Roman_Emper0r
 *    created: 11th_Feb_2023
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define ii pair<int, int>


void solve(){
ll n,k;
cin>>n>>k;

ll a[n],b[n];

for(int i=0; i<n; i++) cin>>a[i];
vector<pair<ll,ll>> v;

for(int i=0; i<n; i++)
{
    cin>>b[i];
    if(i==0) a[i]+=b[i];
    else a[i]+=b[i]+a[i-1];
   v.pb({a[i],b[i]});
}

sort(v.begin(), v.end());
ll ans=-1;
for(int i=n-1; i>=0; i--)
{
    cout<<k<<" "<<v[i].F-v[i].S<<endl;
    if(k>= (v[i].F-v[i].S)){ ans=i; break; }
}

cout<<ans+1<<endl;







return;
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


