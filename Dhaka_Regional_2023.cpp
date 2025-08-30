/**
 *    author:  Roman_Emper0r
 *    created: 07-10-2023  23:00:00
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
    vector<int> ok,ok2;
    int tmp=1;
    ok2.pb(tmp);

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
            tmp++;

        }
        ok2.pb(tmp);
    }
    return ok2;
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
ll fun1(ll a,ll n)
{
    ll ans=0;
map<ll,ll>map1;
for(int i=1; i<=n; i++)
{
    //cout<<abs((i%a)-(i%(a-1)))<<" for "<<i%a<<" "<<i%(a-1)<<endl;
    ans += abs((i%a)-(i%(a-1)));
    map1[abs((i%a)-(i%(a-1)))]++;
}
return ans;
}

ll pre_cal[100000];
void solve(){
    
    //vector<int> primes = SieveOfEratosthenes(6000);
    // cout<<"sz = "<<primes.size()-8000<<endl;
    // for(int i = 0; i < primes.size(); i++){
    //     cout<<i<<" "<<primes[i]<<endl;
    // }
    // cout<<endl;

ll a,n;
cin>>a>>n;
for(int i=1; i<=n; i++)cout<<i<<" "<<fun1(a,i)<<" "<<i<<" "<<fun1(a-1,i)<<endl;
//(auto x : map1) cout<<x.first<<" "<<x.second<<endl;
//cout<<ans<<endl;
ll ans=0;
ll tmp1= (a*(a-1));
ll tmp2=n/tmp1;
ll tmp3= n%tmp1;
int j=1;
for(int i=a-1; i>=1; i-- )
{
    ans +=(i*j);
    j+=2;
}
ans *=tmp2;
for(ll i=tmp1; i<= tmp1+tmp3; i++)
{
     ans += abs((i%a)-(i%(a-1)));
}
cout<<ans<<endl;


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
       
        int test=t;
//     ll j=1;
// for(int i=100000-1; i>=1; i-- )
// {
//     ans +=(i*j);
//     j+=2;
//}
       while(t--){
        //cout<<"Case "<<test-t<<": ";
           solve() ;
       }
       return 0 ;

}

