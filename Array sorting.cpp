/**
 *    author:  Roman_Emper0r
 *    created: 29.06.2022      
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
   
   int n;
   cin>>n;
   int mx=0;

   for(int i=1; i<=n; i++)
   {
    int tmp;
    cin>>tmp;
    if(tmp!=i)
    {
      
      mx=max(mx,abs(tmp-i));
    }
   }
   
   cout<<mx<<endl;

  }
  }


