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

void solve(){
    
    //vector<int> primes = SieveOfEratosthenes(6000);
    // cout<<"sz = "<<primes.size()-8000<<endl;
    // for(int i = 0; i < primes.size(); i++){
    //     cout<<i<<" "<<primes[i]<<endl;
    // }
    // cout<<endl;

ll n,k;
cin>>n>>k;
ll a[n];
for(int i=0; i<n; i++) cin>>a[i];

map<ll,ll>map1;
set<ll>set1;
ll total =0;
for(int i=0; i<n; i++)
{
    ll tmp;
    cin>>tmp;
    set1.insert(a[i]);
    map1[a[i]] += tmp;
    total += tmp;
}



for(int i=0; i<k; i++)
{
    ll tmp;
    cin>>tmp;
    ll m= total-tmp;
    total=tmp;
    vector<ll> v;
  if(i%2==0) 
  { 
    for(auto x: set1)
    {
        
        if(map1[x] > m)
        {
            map1[x] -= m;
            break;
        }
        else
        {
            
            m -= map1[x];
            map1[x] = 0;
            v.push_back(x);
        }
    }
    }
    else
    {
        set<ll>::reverse_iterator rit;
        for (rit = set1.rbegin(); rit != set1.rend(); rit++)
          {
            ll x = *rit ;

            if(map1[x] > m)
            {
                map1[x] -= m;
                break;
            }
            else
            {
                m -= map1[x];
                map1[x] = 0;
                v.push_back(x);
            }
          }
    }

    for(int jj=0; jj<v.size(); jj++)
    {
        set1.erase(set1.find(v[jj]));
       // cout<<"ami "<<v[jj]<<" ";
    }

 
}

ll ans=0;

for(auto x: set1)
{
    //cout<<x<<" "<<map1[x]<<endl;
    ans += (x*map1[x]);
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
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}

