/**
 *    author:  Roman_Emper0r
 *    created: 06.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
 

void solve()
{
       
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<ll>ss;
    ll ans=0;
   
    
    for(int i=0; i<s.size(); i++)
    {
      if(s[i]==')'&&s[i+1]=='(')
      {
        
        ans++;
      }

    }
    cout<<n-ans<<endl;
        
    
   
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
    solve();
   }
}


