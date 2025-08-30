/**
 *    author:  Roman_Emper0r
 *    created: 29.10.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
     
   ll n;
   cin>>n; 
   if(n==5) cout<<"3\n";
   else if(n<5) cout<<"7\n";
   else cout<<"3\n";

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


