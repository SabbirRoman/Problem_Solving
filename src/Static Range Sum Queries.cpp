/**
 *    author:  Roman_Emper0r
 *    created: 28.08.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;

using namespace std;
#define ll long long




int main() {
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif


  
    
      ll n,q;
      cin>>n>>q;
      ll a[n+1];
      a[0]=0;

      for(int i=1; i<=n; i++)
      {
        cin>>a[i];
        a[i]+=a[i-1];
      }

      while(q--)
      {
        ll l,r;
        cin>>l>>r;

        cout<<a[r]-a[l-1]<<endl;
      }
        
    }
  


