/**
 *    author:  Roman_Emper0r
 *    created: 29.06.2022      
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
 
  while(t--)
  {
    ll n;
    cin>>n; 
    ll b[n],sum=0;

    for(int i=0; i<n; i++){
      cin>>b[i];
      sum+=b[i];
    }
    sum/=(n+1);
    for(int i=0; i<n; i++)cout<<b[i]-sum<<" ";
      cout<<endl;
  }
}

