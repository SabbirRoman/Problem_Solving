/**
 *    author:  Roman_Emper0r
 *    created: 15-08-2023  21:27:30
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

void solve(){

 int n=3, m=3;
       
       vector<pair<int,int>> zero;
        std::vector<std::vector<int>> v(n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int tmp=1000000000;
                cin>>tmp;
                v[i].push_back(tmp);
            }
        }
        for(int i=0; i<zero.size(); i++)
        {
           fun(v,n,m,zero[i].first, zero[i].second);
        }

    
   
   
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin) ;
    // freopen("output.txt","w",stdout);
 #endif
       int  t=1;
     // cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


