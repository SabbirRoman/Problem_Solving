#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s,t;
bool ans;

void reverse_string2(int i, int j)
{
   if(i<0 || j==t.size())return;

   if(s[i]==t[j])
   {
      i--; j++;
      if(j==t.size())
      {
         ans=true;
      }
      reverse_string2(i,j);

   }else return;
}

void reverse_string1(int i,int j)
{
   if(i==s.size() || j==t.size()) return;
   if(s[i]==t[j])
   {
      i++;j++;
      if(j==t.size())
      {
         ans=true;
      }
      reverse_string1(i,j);
      reverse_string2(i-2,j);
   }else
   {
      i-=2;
      reverse_string2(i,j);
   }
}


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int test;
   cin>>test;
   while(test--)
   {
      ans=false;
     cin>>s>>t;
     int j;
     for(int i=0; i<s.size(); i++){
      j=0;
      
      if(s[i]==t[j])
      {
          j++;
         //cout<<j<<endl;
          if(j==t.size())
      {
         ans=true;
      }
         reverse_string1(i+1,j);
         reverse_string2(i-1,j);
      }
     }

     if(ans)cout<<"YES\n";
     else cout<<"NO\n";
   }

  
  
}

