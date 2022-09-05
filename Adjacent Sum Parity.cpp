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
    int n,cnt_one=0;
    cin>>n;
    for(int i=0; i<n; i++){
      int tmp;
      cin>>tmp;
      if(tmp==1)cnt_one++;
    }
    if(cnt_one%2)cout<<"NO\n";
    else cout<<"YES\n";
    
   }
  }


