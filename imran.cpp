#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  int t;
  cin>>t;
  while(t--){
   ll l,r;
   cin>>l>>r;
   ll ans=(l-1)/2;
   if((l-1)%2)ans++;
   int ans1=(r/2);
   if(r%2)ans1++;
   cout<<(r-l+1)-(ans1-ans)<<endl;
}
}

