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
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
      ll tmp;
      cin>>tmp;
      ans+=tmp;
    }
    ans%=m;
    cout<<"Case #"<<test-t<<": "<<ans<<endl;
   }
  }


