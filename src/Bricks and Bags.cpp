/**
 *    author:  Roman_Emper0r
 *    created: 29.10.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
     
   int n; 
   cin>>n;
   std::vector<ll> v;

   for (int i = 0; i < n; ++i)
   {
       ll tmp;
       cin>>tmp;
       v.push_back(tmp);
   }

   sort(v.begin(), v.end());

   ll a=v[0], b=v[1], c=v[n-2], d=v[n-1];

   ll ans= abs(a-d) + max(min((c-a),(b-a)), min((d-c),(d-b)));

   cout<<ans<<endl;

}
int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
       cin >> t ;
       while(t--){
           solve() ;
       }
       return 0 ;

}


