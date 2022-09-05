/**
 *    author:  Roman_Emper0r
 *    created: 12.07.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool check(ll a[3])
{
  for(int i=0; i<3; i++)
  {
    for(ll j=2; j*j<=a[i]; j++)
    {
      if(a[i]%j==0) return false;
    }
  }

  return true;
}


int main() {
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int t;
  cin>>t;
 
  while(t--)
  {
    ll x,y;
    cin>>x>>y;

    ll a[3];
    a[0]=2;
    a[1]=a[0]^x;
    a[2]=a[1]^y;

    sort(a,a+3);


   if(check(a)) cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
   else{
    a[1]=x^2;
    a[2]=y^2;
    sort(a,a+3);
     if(check(a)) cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
     else
     {
       a[0]=2;
    a[1]=a[0]^y;
    a[2]=a[1]^x;

    sort(a,a+3);


   if(check(a)) cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
     }
   }
   }
  }


