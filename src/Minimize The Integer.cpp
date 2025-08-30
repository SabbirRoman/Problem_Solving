/**
 *    author:  Roman_Emper0r
 *    created: 31.05.2022      
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
  std::vector<int> even, odd;

  for(int i=0; i<s.size(); i++)
  {
    if((s[i]-'0')%2)odd.push_back(i);
    else even.push_back(i);
  }
  int i=0,j=0;
  string ans;
  while((i!=odd.size()) && (j!=even.size()))
  {
    if(odd[i]>even[j])
    {
      if(s[odd[i]]<s[even[j]])
      {
        ans+=s[odd[i]];
        s[odd[i]]='$';
        i++;
       

      }
      else 
        {
          ans+=s[even[j]];
          s[even[j]]='$';
          j++;
        }
    }
    else
    {
      if(s[odd[i]]>s[even[j]])
      {
        ans+=s[even[j]];
       s[even[j]]='$';
        j++;

      }
      else 
      {
        ans+=s[odd[i]];
        s[odd[i]]='$';
        i++;
      }
    }
  }

  cout<<ans;
  for( i=0; i<s.size(); i++)
  {
    if(s[i]!='$')cout<<s[i];
  }
  cout<<endl;
 
  
}
  


 

   
}