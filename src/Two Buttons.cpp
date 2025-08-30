/**
 *    author:  Roman_Emper0r
 *    created: 04.08.2022      
**/

#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
   ll n,m;
   cin>>n>>m;

   if(m<=n)cout<<n-m<<endl;
   else
   {
    ll cnt=0,ans=1e10;
    while(n!=m)
    {
      //  if(cnt==100)break;
      //  cout<<m<<" "<<ans<<endl;
        if(m<n){
            if(ans>=(cnt+(n-m))) ans=cnt+(n-m);
            else break;
        }
        cnt++;
       if(m%2==0)m/=2;
       else m++;
    }
    if(n==m) ans=min(ans,cnt);
    cout<<ans<<endl;
   }




}