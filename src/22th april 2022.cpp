
/**
 *    author:  Roman_Emper0r
 *    created: 22.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
  void solve()
  {
    int t;
    cin>>t;
    while(t--)
    {
      ll n,x;
      cin>>n>>x;
      ll a[n+5];
      for(int i=0; i<n; i++)cin>>a[i];
        sort(a,a+n);
      for(int i=1; i<n; i++)a[i]+=a[i-1];
        ll days=0,ans=0;
        for(int i=n-1; i>=0; i--)
        {
          ll tmp=(days*(i+1))+a[i];
          if(tmp<=x)
          {
            tmp=x-tmp;
            ans+=(i+1);
            days++;
            tmp/=(i+1);
            days+=tmp;
            ans+=(tmp*(i+1));
           // cout<<ans<<" "<<days<<endl;
          }

        }
        cout<<ans<<endl;
      }

  }

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
   solve();
}

