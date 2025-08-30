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
      string s;
      int k;
   cin>>s>>k;
   while(k--){
      sort(s.begin(),s.end());
      if(s[0]=='9')break;
      s[0]+=1;

   }
   ll ans=1;
   for(int i=0; i<s.size(); i++)ans*=(s[i]-'0');
   cout<<ans<<endl;
   
   }
   
}