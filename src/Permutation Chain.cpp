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
  int t;
  cin>>t;
  while(t--)
  {

    ll n;
    cin>>n;
    cout<<n<<endl;

    for(int i=0; i<n; i++)cout<<i+1<<" ";
      cout<<endl;

    ll tmp=2;
    while(tmp<=n)
    {
      
        for(int i=2; i<=tmp; i++)cout<<i<<" ";
          cout<<"1 ";
      
      for(int i=tmp+1; i<=n; i++)cout<<i<<" ";
        cout<<endl;
      tmp++;
    }

   }




}