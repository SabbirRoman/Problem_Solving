#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>
#include <functional>

using namespace __gnu_pbds;
using namespace std;

#define  pb          push_back
#define  pk          pop_back
#define  mpr         make_pair
#define  ff          first
#define  ss          second
#define  endl        "\n"
#define  pi          2*acos(0.0)
#define  ll          long long 
#define  pii         pair<int, int>
#define  vi          vector<int>
#define  vll         vector<ll> 
#define  ms(a,v)     memset(a,v,sizeof(a))
#define  dbg         cout<<"Heyyyyy"<<endl
#define  all(a)      a.begin(), a.end()
#define  watch(x)    cerr<<"\n"<<(#x)<<" is "<<(x)<<endl

template < class T > T gcd(T a, T b){
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template < class T > T lcm(T a, T b){
    return (a / gcd<T>(a, b) * b); 
}

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
typedef tree<pair<int, int>, null_type, less<pair<int, int> >,
             rb_tree_tag, tree_order_statistics_node_update>
    ordered_map;
inline ll mod(ll a, ll m){
    return (a % m + m) % m;
}

int dx[8]={0, 1, 0, -1, -1, -1, 1, 1};
int dy[8]={1, 0, -1, 0, -1, 1, -1, 1};
const double eps = 1e-9;
const ll MOD = 1e9 + 7;
const ll  INF = 1e18;
const int MX = INT_MAX;
const int MN = INT_MIN;
ll bigmod(ll a, ll x, ll M){
    if(x == 0) return 1;
    if(x%2 == 0){
        ll t = bigmod(a, x/2, M);
        return (ll)((t*t)%M);
    }
    return (ll)(bigmod(a, x-1, M)*a)%M;
}
ll n, k;
vll v;
void solve(){
  cin>>n>>k;
  k = min((ll)30, k);
  ll res = (1<<k)-1;       
  cout<<min(n,res)+1<<endl;
}

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //ll test_case = 1;

    int tc = 1;
    cin>>tc;
    while(tc--){
        //cout<<"Case "<<test_case<<": ";
        //test_case++;
        solve();
        //if(fl) break;
    }
    return 0;
}