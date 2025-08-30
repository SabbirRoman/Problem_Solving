
/**
 *    author:  Roman_Emper0r
 *    created: 24.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;


  void solve()
  {
   // int n;
    ll d,cnt=0,n;
    cin>>n>>d;
    ll a[n];
    
    for(int i=0; i<n; i++)cin>>a[i];
      if(a[0]==1)cnt++;
      for(int i=1; i<n; i++)if(a[i]!=a[i-1] && a[i]==1)cnt++;

     cout<<cnt<<endl;

  }

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  int t,test;
  cin>>t;
  test=t;
  while(t--){
    cout<<"Case #"<<test-t<<": ";
    solve();
  }
  }
