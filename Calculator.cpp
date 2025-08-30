/**
 *    author:  Roman_Emper0r
 *    created: 12.05.2022     
**/
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
   ll n,b;
   cin>>n>>b;
   ll ans=0;
   //55*5 || 46*6
   ll tmp=n/b;
   ll tmp2=tmp,tmp3=0;
   tmp2/=2;
   tmp2=(n-(tmp2*b))*tmp2;
   if(tmp%2)
   {
    tmp3=(tmp/2)+1;
    tmp3=(n-(tmp3*b))*tmp3;
   }
   tmp=(n-(tmp*b))*tmp;

   ans=max({ans,tmp3,tmp2,tmp});



   cout<<ans<<endl;
}
}
 