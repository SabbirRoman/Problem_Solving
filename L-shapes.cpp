/**
 *    author:  Roman_Emper0r
 *    created: 29.08.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
          
}

int main() {
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
  freopen("output.txt","w",stdout);
 #endif

      int t;
      cin>>t;
      while(t--)
      {
         int n,m;
         cin>>n>>m;

         string s[n];

         for(int i=0; i<n; i++)cin>>s[i];
            bool ans=true;

      for(int i=0; i<n; i++)
      {
            for(int j=0; j<m; j++)
            {
                  if(s[i][j]=='*')
                  {
                        if((s[i-1][j-1]=='*') || (s[i-1][j+1]=='*') || (s[i+1][j-1]=='*') || (s[i+1][j+1]=='*') )
                        {
                              ans=false;
                        }
                        int cnt=0;
                        if(s[i-1][j]=='*') cnt++;
                        if(s[i+1][j]=='*') cnt++;
                        if(s[i][j-1]=='*') cnt++;
                        if(s[i][j+1]=='*') cnt++;

                        if(cnt>2)ans=false;
                        if(((s[i-1][j]=='*')&&(s[i][j-1]=='*')) || ((s[i-1][j]=='*')&&(s[i][j+1]=='*')) || ((s[i][j-1]=='*')&&(s[i+1][j]=='*')) || ((s[i][j+1]=='*')&&(s[i+1][j]=='*')))
                        {
                              for(int p=i+1; p<n; p++)
                              {
                                    if(s[p][j]=='*')s[p][j]='.';
                                    else break;
                              }
                              for(int p=i-1; p>=0; p--)
                              {
                                    if(s[p][j]=='*')s[p][j]='.';
                                    else break;
                              }

                              for(int p=j+1; p<m; p++)
                              {
                                    if(s[i][p]=='*')s[i][p]='.';
                                    else break;
                              }
                              for(int p=j-1; p>=0; p--)
                              {
                                    if(s[i][p]=='*')s[i][p]='.';
                                    else break;
                              }
                              s[i][j]='.';
                        }

                      
                  }
            }
      }

      for(int i=0; i<n; i++)
      {
            for(int j=0; j<m; j++)
            {
                  if(s[i][j]=='*')
                  {
                        ans=false;
                        break;
                  }
            }
            if(ans==false) break;
      }

      if(ans) cout<<"YES\n";
      else cout<<"NO\n";


      }

}


