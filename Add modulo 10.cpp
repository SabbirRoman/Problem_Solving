/**
 *    author:  Roman_Emper0r
 *    created: 29.08.2022
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
      int n;
      cin>>n;
      ll a,mx=-1,mn=1e10;

      for(int i=0; i<n; i++)
      {
            cin>>a;

            if(a%5==0)
            {     
                  if(a%10!=0) a+=5;

                  mx=max(a,mx);
                  mn=min(a,mn);
            }
            else
            {
                  a%=20;
                  while(a<20)
                  {
                        a+=(a%10);
                  }
                  a%=20;
                  if(a==4 || a==8) a=2;
                  mx=max(a,mx);
                  mn=min(a,mn);
            }
      }

      if(mx==mn) cout<<"YES\n";
      else cout<<"NO\n";
     }
}


