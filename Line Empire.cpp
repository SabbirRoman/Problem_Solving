/**
 *    author:  Roman_Emper0r
 *    created: 29.08.2022
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

while(t--)
{
     ll ans,n,a,b;
     cin>>n>>a>>b;

     ll arr[n+1];
     for(int i=1; i<=n; i++)cin>>arr[i];
     arr[0]=0;
     ans=b*arr[0];
     ll pos=0;
     for(int i=2; i<=n; i++)
     {
          ll tmp1=(b*(arr[i]-arr[pos]));

          ll pos1=pos;
          for(int j=pos; j<i; j++)
          {
               ll tmp2= a*(arr[j]-arr[pos])+((b*(arr[i]-arr[j])));
               if(tmp2<tmp1)
               {
                    tmp1=tmp2;
                    pos1=j;
               }
          }

          cout<<pos<<" "<<pos1<<endl;
          ans+=a*(arr[pos1]-arr[pos])+((b*(arr[i]-arr[pos1])));
          if(pos!=pos1) pos=pos1;
     }

     cout<<ans<<endl;
}

}


