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

  ll n,k;
  cin>>n>>k;

  string s;
  cin>>s;

  vector<ll> count_a, count_b;

  count_a.pb(0);
  count_b.pb(0);
  ll cnt_a=0, cnt_b=0;
  for(int i=0; i<n; i++)
  {
    if(s[i]=='a') cnt_a++;
    else cnt_b++;
    count_a.pb(cnt_a);
    count_b.pb(cnt_b);
  }
  ll i=0,j=0,sub_ln=(j-i+1), ans=0;
  while(j<n)
  {
    sub_ln=(j-i+1);
    cnt_a=count_a[j+1]- count_a[i];
    cnt_b= sub_ln - cnt_a;


    if(cnt_b>k)i++;
    else j++,ans=max(ans, sub_ln);
    j=max(j,i);
  }
  i=0,j=0;
   while(j<n)
  {
    sub_ln=(j-i+1);
    cnt_b=count_b[j+1]- count_b[i];
    cnt_a= sub_ln - cnt_b;


    if(cnt_a>k)i++;
    else j++,ans=max(ans, sub_ln);
    j=max(j,i);
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


