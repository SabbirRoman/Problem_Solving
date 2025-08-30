/**
 *    author:  Roman_Emper0r
 *    created: 08-09-2023  15:00:00
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
int vis[100009], n;
vector<int> ad[100009];
int h[100009];
vector<int> SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    vector<int> ok;
    memset(prime, true, sizeof(prime));
  
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++){
        if (prime[p]){
            ok.pb(p);
        }
    }
    return ok;
}
int dfs(int node, int pr){
    //cout<<node<<" "<<pr<<endl;
    vis[node] = 1;
    if(h[node] % pr != 0){
        return 0;
    }
    int ok = 0;
    for(int i = 0; i < ad[node].size(); i++){
        int ch = ad[node][i];
        if(vis[ch]) continue;
        ok += dfs(ch, pr);
    }
    return ok+1;
}
void solve(){
    cin>>n;
    vector<int> primes = SieveOfEratosthenes(100000);
    /*cout<<"sz = "<<primes.size()-8000<<endl;
    for(int i = 0; i < primes.size(); i++){
        cout<<primes[i]<<" ";
    }
    cout<<endl;*/
   int res = 0;
   for(int i = 1; i <= n; i++){
    cin>>h[i];
   }
   for(int i = 1; i < n; i++){
    int u, v;
    cin>>u>>v;
    ad[u].pb(v);
    ad[v].pb(u);
   }
   
   for(int i = 0; i < primes.size()-8000; i++){
    for(int j = 1; j <= n; j++){
        vis[j] = 0;
    }
    for(int j = 1; j <= n; j++){
        if(vis[j]) continue;
        res = max(res, dfs(j, primes[i]));
    }
   }
   cout<<res<<endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
      //cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


