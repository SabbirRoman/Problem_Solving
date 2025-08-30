/**
 *    author:  Roman_Emper0r
 *    created: 21.05.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  int n,k;
  cin>>n>>k;
  string s;
  cin>>s;
  int ans=0;
  set<char>set,final;
  int a[30];
  for(int i=0; i<27; i++)a[i]=0;
  for(int i=0; i<k;i++)
  {
    set.insert(s[i]);
    int tmp=s[i]-'a';
    a[tmp]++;
    if(a[tmp]%2)ans++;
    else ans--;
  }
  if(ans<2){
    for(auto x: set)final.insert(x);
  }
  for(int i=k; i<s.size();i++)
  {
    int tmp=s[i]-'a';
    a[tmp]++;
    if(a[tmp]==1)set.insert(s[i]);
    if(a[tmp]%2)ans++;
    else ans--;
    tmp=s[i-k]-'a';
    a[tmp]--;
    if(a[tmp]%2)ans++;
    else ans--;
    if(a[tmp]==0)set.erase(s[i-k]);
    if(ans<2){
      tmp=k/2; if(k%2)tmp++;
      char ch3='0',ch4='0';
      auto it1=set.begin(),it2=final.begin();
      while(it1!=set.end())
      {
        char ch1=*it1, ch2=*it2;
        if(a[ch1-'a'])ch3=ch1;
        if(a[ch1-'a']<2){
          it1++; continue;
        }
        if(a[ch2-'a'])ch4=ch2;
        if(a[ch2-'a']<2){
          it2++; continue;
        }
        if(ch1<ch2){
          for(auto x: set)final.insert(x);
          /// assign final = set;

          break;
        }


      }
      if(ch3!='0' && ch3<ch4){
        for(auto x: set)final.insert(x);
        /// assign final = set;
      }
    }
  }
  if(ans<2)for(auto x: set)cout<<x<<" ";
  else cout<<"No Passcode Found";
  cout<<endl;
}