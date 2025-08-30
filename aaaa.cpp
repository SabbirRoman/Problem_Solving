/**
 *    author:  Roman_Emper0r
 *    created: 24-09-2023  20:35:00
**/
#include<bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;
#define FOR(a,b) for(int i=a;i<(int)b;i++)
#define FORr(a,b) for(int i =a;i>=(int)b;i--)

#define print(arr)  for(auto a: arr) cout << a<< " "; cout << endl;
#define in(a) int a; cin >> a;
#define inp(arr,n) vector<int>arr(n); for(auto &a: arr) cin >> a;
#define pb emplace_back

#define mp make_pair
#define f first
#define vi vector<int>
#define s second
#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define          sz(a)               (int)a.size()
#define lpr pair<long long int,long long int>
#define nl '\n'
#define ii pair<int, int>
#define yes cout<<"Yes\n";
#define no cout<<"No\n";



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

ll permutation(ll tmp,ll mod2)
{
    ll ans=1;
    for(int i=1; i<=tmp; i++)
    {
        ans *=i;
        ans %=mod2;
        
    }
    return ans;
}

void solve(){
    
    //vector<int> primes = SieveOfEratosthenes(100000);
    /*cout<<"sz = "<<primes.size()-8000<<endl;
    for(int i = 0; i < primes.size(); i++){
        cout<<primes[i]<<" ";
    }
    cout<<endl;*/
  string s;
  cin>>s;
  ll ans1=0, ans2=1, tmp=1;
  ll mod2 = 998244353;
  vector<ll>v;
  for(int i=1; i<s.size(); i++)
  {
    if(s[i]==s[i-1]) tmp++;
    else
    {

        ans1 += tmp-1;
       if(tmp>1) v.pb(permutation(tmp, mod2));
        ans2 %=mod2;

        tmp=1;
    }
  }
        ans1 += tmp-1;
        if(tmp>1) v.pb(permutation(tmp, mod2)) ;
       
for(int i=0; i<v.size(); i++)
{
ans2*=v[i];
ans2%=mod2;
        
}
ll one=1;
  cout<<ans1<<" "<<max(one,ans2)<<endl;


}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
      cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


