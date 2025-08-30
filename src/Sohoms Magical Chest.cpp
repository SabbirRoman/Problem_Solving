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
  set<char>st;
  set<string>final;
  int a[30];
  for(int i=0; i<27; i++)a[i]=0;
  for(int i=0; i<k;i++)
  {
    st.insert(s[i]);
    int tmp=s[i]-'a';
    a[tmp]++;
    if(a[tmp]%2)ans++;
    else ans--;
  }

  if(ans<2){
         string firstString = "" , secondString = "" , thirdString = "" ;
         for(auto it : st){
               int cnt = a[it - 'a'] ;
               
               if(cnt % 2 == 1){
                    cnt -= 1 ;
                    thirdString += it ;
               }
               cnt = cnt / 2 ;
               int cnt2 = cnt ;
               while(cnt2--) firstString += it ;
               cnt2 =  cnt ;
               while(cnt2--) secondString = it + secondString ;

               string finalString = firstString + thirdString + secondString ;
               if(finalString.size() == k) final.insert(finalString);
         }

     
    }

 


  for(int i=k; i<s.size();i++)
  {
    int tmp=s[i]-'a';
    a[tmp]++;
    if(a[tmp]==1)st.insert(s[i]);
    if(a[tmp]%2)ans++;
    else ans--;
    tmp=s[i-k]-'a';
    a[tmp]--;
    if(a[tmp]%2)ans++;
    else ans--;
    if(a[tmp]==0)st.erase(s[i-k]);
    if(ans<2){
         string firstString = "" , secondString = "" , thirdString = "" ;
         for(auto it : st){
               int cnt = a[it - 'a'] ;
               
               if(cnt % 2 == 1){
                    cnt -= 1 ;
                    
                    thirdString += it ;
               }
               cnt = cnt / 2 ;
               int cnt2 = cnt ;
               while(cnt2--) firstString += it ;
               cnt2 = cnt ;
               while(cnt2--) secondString = it + secondString ;

               string finalString = firstString + thirdString + secondString ;
               if(finalString.size() == k) final.insert(finalString);
         }

     
    }
  }
  if(final.size() != 0){
       cout << *final.begin() << '\n';
      
  }
  else cout<<"No Passcode Found";
  cout<<endl;
}