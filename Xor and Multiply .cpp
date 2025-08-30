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
    ll n,a,b;
    cin>>n>>a>>b;
    if(a<b)swap(a,b);
    ll num=1;
    for(int i=0; i<n; i++)num*=2;
      num--;

    
    int j;
j=0;
    string s1,s2;
    for(int i=0; i<n; i++){
      s1+='0';
      s2+='0';
    }
    int k=n-1;
    while(a){
      int tmp=a%2;
      a/=2;
      if(tmp)s1[k]='1';
     else s1[k]='0';
      k--;
    }
    k=n-1;
    while(b){
      int tmp=b%2;
      b/=2;
     if(tmp)s2[k]='1';
     else s2[k]='0';
      k--;
    }
  //  cout<<s1<<endl;
   // cout<<s2<<endl;
    
   int s[n];
   
   for(int i=0; i<n; i++)
   {
    if(s1[i]==s2[i]){
      if(s1[i]=='0')s[i]=1;
      else s[i]=0;
    }else{
      char ch;
      if(j)ch=s1[i];
      else ch=s2[i];
      j=1;
      if(ch=='0')s[i]=0;
      else s[i]=1;
    }
   }
  // for(int i=0; i<n; i++)cout<<s[i];
 //   cout<<endl;
   ll ans=0,cnt=1;
   while(n--)
   {
    ans+=(cnt*s[n]);
    cnt*=2;

   }
     
    cout<<ans<<endl;
    
   }
  }


