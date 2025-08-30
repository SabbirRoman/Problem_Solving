#include<bits/stdc++.h>
#define ll long long
 
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
  #endif 
  

  ll test;
  cin>>test;
  while(test--)
  {
      int n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      
      int index=0;
      for(int i=0; i<s.size(); i++)
      {
        if(s[i]=='0'){
          int tmp = min(k, (i-index));
          k -= tmp;
          swap(s[i],s[i-tmp]);
          index++;
        }
        if(k<=0) break;
      }
      cout<<s<<endl;
  }

}

