/**
 *    author:  Roman_Emper0r
 *    created: 12.09.2022
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
    
  

  string s;
   cin>>s;
int n=s.size();
   std::vector<int > v[26];
   int cost=abs((s[0]-'a')-(s[n-1]-'a'));

   int tmp1=s[0]-'a', tmpn=s[n-1]-'a',tmp;

   for(int i=0; i<n;i++)
   {
    tmp=s[i]-'a';
    v[tmp].push_back(i+1);
   }
   

   if(s[0]==s[n-1]) 
   {
    tmp=s[0]-'a';
    cout<<cost<<" "<<v[tmp].size()<<endl;

    for(int i=0; i<v[tmp].size(); i++)cout<<v[tmp][i]<<" ";
   }
   else if(s[0]<s[n-1]) 
   {
    ll ans=0;
    for(int i=tmp1; i<=tmpn; i++) ans+=v[i].size();

        cout<<cost<<" "<<ans<<endl;
    for(int i=tmp1; i<=tmpn; i++) 
    {
        
        for(int j=0; j<v[i].size(); j++)cout<<v[i][j]<<" ";
    }


   }
   else 
    {
    ll ans=0;
     for(int i=tmp1; i>=tmpn; i--) ans+=v[i].size();

        cout<<cost<<" "<<ans<<endl;
    for(int i=tmp1; i>=tmpn; i--) 
    {
        for(int j=0; j<v[i].size(); j++)cout<<v[i][j]<<" ";
    }


   }
   cout<<endl;
   
   


   }

   
    

}


