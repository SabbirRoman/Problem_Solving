/**
 *    author:  Roman_Emper0r
 *    created: 15.08.2022
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
        string s,s1;
        cin>>s>>s1;
        s+=s1;
        int ans[3],z=0;
         for(int i=0; i<3; i++)
         {
            int cnt=1;
            for(int j=i+1; j<4; j++)
            {
                if(s[i]==s[j]) cnt++;
            }
            ans[z++]=cnt;
         }
         sort(ans,ans+3);
         //for(int i=0; i<3; i++)cout<<ans[i]<<endl;

         if(ans[2]==4) cout<<'0'<<endl;
         else if(ans[2]==3)cout<<'1'<<endl;
         else if(ans[1]==2 ) cout<<'1'<<endl;
         else if(ans[2]==1) cout<<'3'<<endl;
         else cout<<'2'<<endl;
    }
  }


