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

void solve(){
    
    //vector<int> primes = SieveOfEratosthenes(6000);
    // cout<<"sz = "<<primes.size()-8000<<endl;
    // for(int i = 0; i < primes.size(); i++){
    //     cout<<i<<" "<<primes[i]<<endl;
    // }
    // cout<<endl;

    ll n;
    cin>>n;

    ll a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    if(n==5)
    {
        ll tmp1 = (a[0]+a[1]), tmp2 = (a[n-1]+a[n-3]);
       double p,q;
        tmp1/=2;
        p = tmp1;
        if((a[0]+a[1])%2) p +=0.5;
        tmp2/=2;
        q= tmp2;
        if((a[n-1]+a[n-3])%2) q+= 0.5;
        
        q -= p;
        long double ans= q;

        tmp1 = (a[0]+a[2]);
        tmp2 = (a[n-1]+a[n-2]);
        tmp1 /=2;
        p = tmp1;
        if((a[0]+a[2])%2) p+= 0.5;
        
        tmp2 /=2;
        q= tmp2;
        if((a[n-1]+a[n-2])%2) q+= 0.5;
        q -= p;
        if(q > ans) cout<<q<<endl;
        else cout<<ans<<endl;

    }
    else
    {
       ll tmp1 = (a[0]+a[1]), tmp2 = (a[n-1]+a[n-2]);
       long double p=0,q=0;
        tmp1/=2;
         
        if((a[0]+a[1])%2) p =0.5;
        tmp2/=2;
        
        if((a[n-1]+a[n-2])%2) q= 0.5;
       // cout<<n<<"= n  "<<tmp2<<" "<<tmp1<<endl;
        q -= p;
        p = tmp2 -tmp1;
        p +=q;
        cout<<p<<endl;
    }





}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("Hack_out.txt","w",stdout);
 #endif
       int  t=1;
      cin>>t ;
       
        int test=t;
    
       while(t--){
        cout<<"Case #"<<test-t<<": ";
           solve() ;
       }
       return 0 ;

}

