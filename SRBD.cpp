/**
 *    author:  Roman_Emper0r
 *    created: 28-09-2023  15:00:00
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define          sz(a)               (int)a.size()
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define ii pair<int, int>
ll mod;

void solve(){
   
   vector<string> s={ "blue",  "red", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black","purple", "yellow","green"};
   //cout<<s.size()<<endl;
   //sort(s.begin(), s.end());
   //  cout<<s.size()<<endl;
   //for(int i=0; i<s.size(); i++)cout<<s[i]<<endl;

   string str;
   cin>>str;
   map<char,int>mp1;
   for(int i=0; i<str.size(); i++)
   {
    mp1[str[i]]++;
   }
ll ans=0;
   for(int i=0; i<s.size(); i++)
   {
        int tmp= 1e9;
        for(int j=0; j<s[i].size(); j++)
        {
            tmp = min(tmp, mp1[s[i][j]]);
        }
        if(tmp>0)
            {
                ans += 1;
        for(int j=0; j<s[i].size(); j++)
        {
            mp1[s[i][j]] -= 1;
        }
    }

   }
   cout<<ans<<endl;

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 //     #ifndef ONLINE_JUDGE
 //    freopen("input.txt","r",stdin) ;
 //    freopen("output.txt","w",stdout);
 // #endif
       int  t=1;
      cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


