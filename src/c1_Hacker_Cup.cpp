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

    ll n,q;
    string s;
    cin>>n>>s>>q;
    set<ll>set1;
    map<ll,ll>map1;
    vector<ll>v;
    for(int i=0; i<q; i++)
    {
        ll tmp;
        cin>>tmp;
        set1.insert(tmp);
        map1[tmp]++;
    }
    for(auto x:set1)
        {
            if(map1[x]%2==0) v.pb(x);
        }

    for(int jj=0; jj<v.size(); jj++) set1.erase(set1.find(v[jj]));
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        
        
        
            ll tmp = i+1, sum=0;
            for(auto x: set1)
            {
                if(tmp <= x) break;

                if(tmp%x == 0)
                {
                    sum += map1[x];
                }
            }
            if(s[i]=='0' && (map1[i+1]+ sum)%2){
                //cout<<i+1<<" ddjf"<<endl;
                set1.insert(i+1);
                
                ans++;
                map1[i+1] ++;
            }
            else if(s[i]=='1' && (map1[i+1]+ sum)%2==0){
                set1.insert(i+1);
                
                ans++;
                map1[i+1]++;
            }

            if(map1[i+1]%2==0) set1.erase(i+1);
            

       
    }
    cout<<ans<<endl;






}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("cccccc.txt","r",stdin) ;
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

