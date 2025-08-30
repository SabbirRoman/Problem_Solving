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
  ll n;
  cin>>n;
  string s;
  cin>>s;
  ll tmp=0,cnt=0;
  map<int,int>m;
  m[0]=1;
 
  
  for(int i=0; i<n; i++){
    
     tmp+=s[i]-'0'-1;
    
   
      cnt+=m[tmp];
    
    m[tmp]++;
  }

  cout<<cnt<<endl;
 


 
}
}

