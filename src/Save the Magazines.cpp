/**
 *    author:  Roman_Emper0r
 *    created: 13.10.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
      ll n,ans=0;
      cin>>n;
      string s;
      cin>>s;
      std::vector<int> v;
      for(int i=0; i<n; i++)
      {
        int tm;
        cin>>tm;
        v.push_back(tm);
      }
      int j;
      for(int i=0; i<n; i++)
      {
        if(s[i]=='1')ans+=v[i];
        else
        {
            for( j=i+1; j<n; j++)
            {
                if(s[j]=='0') break;
                if(v[i]>v[j])
                {
                    s[j]='0';
                    ans+=v[i];
                    break;
                }
                else ans+=v[j];
            }
            i=j-1;
        }
      }

      cout<<ans<<endl;

}
int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif
       int  t;
       cin >> t ;
       while(t--){
           solve() ;
       }
       return 0 ;

}


