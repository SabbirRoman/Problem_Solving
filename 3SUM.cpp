/**
 *    author:  Roman_Emper0r
 *    created: 12.06.2022      
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
    
   int t=1;
   cin>>t;
   while(t--){
  	  int n;
     cin>>n;
     ll a[10];
     for(int i=0; i<10; i++)a[i]=0;

     for(int i=0; i<n; i++)
     {
      ll tmp;
      cin>>tmp;
      a[tmp%10]++;
     }
     std::vector<int> v;

     for(int i=0; i<10;i++)
     {
      if(i>7){
         ll tmp=2;
         tmp=min(a[i],tmp);
         for(int j=0; j<tmp; j++)v.push_back(i);
      }else{
         ll tmp=3;
         tmp=min(a[i],tmp);
         for(int j=0; j<tmp; j++)v.push_back(i);
      }
     }
     bool ans=false;

     for(int i=0; i<v.size(); i++)
     {
      for(int j=i+1; j<v.size(); j++)
      {
         for(int k=j+1; k<v.size(); k++)
         {
            ll tmp=v[i]+v[j]+v[k];
            if(tmp==3||tmp==13||tmp==23)ans=true;
         }
      }
     }
     if(ans)cout<<"YES\n";
     else cout<<"NO\n";
     
     
}
}
