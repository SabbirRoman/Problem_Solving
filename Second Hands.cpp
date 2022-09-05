/**
 *    author:  Roman_Emper0r
 *    created: 28.08.2022
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
    int test=t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       map<int,int>mp;
       bool ans=true;
       if((n+1)/2>k) ans=false;

       for(int i=0; i<n; i++)
       {
        int tmp;
        cin>>tmp;
        mp[tmp]++;
        if(mp[tmp]>2)ans=false;
       }

       if(ans)cout<<"Case #"<<test-t<<": YES"<<endl;
       else cout<<"Case #"<<test-t<<": NO"<<endl;
    }
  }


