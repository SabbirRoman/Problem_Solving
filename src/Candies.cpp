/**
 *    author:  Roman_Emper0r
 *    created: 25th_March_2023
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

 ll n;
 cin>>n;
 ll left=1, right=1e18, ans=1e18, k=ans;

 while(left<=right)
 {
  ll mid=(right+left)/2;
  ll tmp_n=n;
  k=0;
  while(tmp_n)
  {
    k+=min(mid, tmp_n);
    tmp_n=max(tmp_n-mid, (tmp_n*0));
    tmp_n-=(tmp_n/10);

  }

  if(2*k>=n) ans=mid, right=mid-1;
  else left=mid+1;
 }
  cout<<ans<<endl;



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


