#include<bits/stdc++.h>
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
      cin>>s;
      int tmp=0,ans=1;
      for(int i=0; i<s.size()-1; i++){
         if(tmp>(s[i]-'0')){
            ans=0; break;
         }else tmp=s[i]-'0';
         
      }
      tmp=s.size();
      if(s[tmp-2]!=(s[tmp-1]))ans=0;

      if(ans)cout<<"YES\n";
      else cout<<"NO\n";
    }
   return 0;

}