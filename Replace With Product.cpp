/**
 *    author:  Roman_Emper0r
 *    created: 08-09-2023  15:00:00
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
   string s;
   int n;
   cin>>s>>n;
   for(int i = 0; i <= 17; i++){
      dp[n+1][i] = 1;
   }
   for(int i = n; i > 1; i--){
      for(int j = 0; j <= 17; j++){
         
      }
   }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
     // cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


