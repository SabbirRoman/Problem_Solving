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
   

    ll a[2][n], b[2][n], c[2][n];
    for(int j=0; j<2; j++)
    {
    for(int i=0; i<n; i++) cin>>a[j][i];
    }



    c[0][0]=0;
    for(int i=1; i<n; i++){
      c[0][i]=max(a[0][i],c[0][i-1])+1;
    }

     c[1][n-1]=max(c[0][n-1], a[1][n-1])+1;

     for(int i=n-2; i>=0; i--)
     {
      c[1][i]=max(a[0][i],c[1][i+1])+1;
     }

    /* for(int j=0; j<2; j++)
    {
    for(int i=0; i<n; i++) cout<<c[j][i]<<" ";
      cout<<endl;
    }*/
     ll tmp=1;
     b[0][0]=0;
     for(int i=0; i<n; i++)
     {
      
      b[tmp][i]=max(a[tmp][i],b[abs(tmp-1)][i])+1;
      b[tmp][i+1]=max(b[tmp][i],a[tmp][i+1])+1;
      tmp=abs(tmp-1);
     }

     /*for(int j=0; j<2; j++)
    {
    for(int i=0; i<n; i++) cout<<c[j][i]<<" ";
      cout<<endl;
  }


     for(int j=0; j<2; j++)
    {
    for(int i=0; i<n; i++) cout<<b[j][i]<<" ";
      cout<<endl;
  }*/

     ll ans=min()

   }




}