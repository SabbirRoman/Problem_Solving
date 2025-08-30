/**
 *    author:  Roman_Emper0r
 *    created: 25.08.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
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
   string s;
   cin>>s;
  
   std::vector<int> v;
 
   for(int i=0; i<s.size(); i++)
   {
       bool two=false,one=false;
      if(s[i]=='o')
      {
         if(i>1 && s[i-1]=='w'&&s[i-2]=='t') two=true;

         
         
         if(s[i+1]=='n'&&s[i+2]=='e' && i<s.size()) one=true;
         if(one&&two ){
           v.push_back(i+1);
         }else if(one)
         {
            v.push_back(i+2);
         }
         else if(two)
         {
            v.push_back(i);
         }
         else{}
         
      }
   }
   cout<<v.size()<<endl;
   for(int i=0; i<v.size(); i++)
   {
      cout<<v[i]<<" ";
   }
cout<<endl;
  }
 

  
  }


