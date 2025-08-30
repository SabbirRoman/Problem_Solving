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
 while(t--)
 {
  ll char_health,char_attack,mon_health,mon_attack,k,w,a;
  cin>>char_health>>char_attack>>mon_health>>mon_attack>>k>>w>>a;
   bool ans=false;
  
 
      for(int i=0; i<=k; i++){
  ll tmp1= char_health+(a*i);
  ll tmp2 = char_attack+(w*(k-i));

  if((mon_health/tmp2)<=(char_health/tmp1)){
    ans=true;
    
    break;
  }

  }


if(ans)cout<<"YES\n";
else cout<<"NO\n";
 }
  
}
