/**
 *    author:  Roman_Emper0r
 *    created: 05.06.2022      
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
      ll w,h,n,cnt=1;
      cin>>w>>h>>n;
      while(w%2==0){
         cnt++;
         w/=2;
      }
      while(h%2==0){
         cnt++;
         h/=2;
      }
      if(cnt>=n)cout<<"YES\n";
      else cout<<"NO\n";
   }
}
