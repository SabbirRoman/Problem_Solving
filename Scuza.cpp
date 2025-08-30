/**
 *    author:  Roman_Emper0r
 *    created: 13.10.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
       ll n,q;
       cin>>n>>q;
       std::vector<ll> v,sum,query;
       v.push_back(0);
       sum.push_back(0);
       ll tm=0,tm1=0;
       for(int i=0; i<n; i++)
       {
         ll tmp;
         cin>>tmp;
         tm+=tmp;
         sum.push_back(tm);
         tm1 = max(tm1,tmp);
         v.push_back(tm1);
       }

      
      

       for(int i=0; i<q; i++)
       {
        ll tmp;
        cin>>tmp;

        auto it = upper_bound(v.begin(), v.end(),tmp);
        it--;
        tmp= it-v.begin();
        tmp= sum[tmp];
        cout<<tmp<<" ";
       }
       cout<<endl;

}
int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif
       int  t;
       cin >> t ;
       while(t--){
           solve() ;
       }
       return 0 ;

}


