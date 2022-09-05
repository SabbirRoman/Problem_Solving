/**
 *    author:  Roman_Emper0r
 *    created: 28.06.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long



int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int t;
  cin>>t;
  int test=t;
  while(t--)
  {
    ll ans=0;
    ll l,r;
    cin>>l>>r;
    ans=min(l,r);
    ans=(ans*(ans+1))/2;
    cout<<"Case #"<<test-t<<": "<<ans<<endl;
   }
  }


