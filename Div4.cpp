/**
 *    author:  Roman_Emper0r
 *    created: 29.08.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
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
            

            int n;
            string s;
            cin>>n>>s;
           
           ll ans=0;
           std::vector<ll> v;
           for(int i=0; i<n; i++)
           {
            if(s[i]=='L')
                  {
                        ans+=i;
                        if(i<(n-i-1)) v.push_back(n-i-1-i);
                  }
            else {
                  ans+=(n-i-1);
                 if(i>(n-i-1))  v.push_back(i-(n-i-1));
            }
           }
           sort(v.begin(), v.end());

            for(int i=v.size()-1; i>=0; i--)
            {
                  ans+=v[i];
                  cout<<ans<<" ";
                  n--;
            }
            while(n--)cout<<ans<<" ";
            cout<<endl;


      }

}


