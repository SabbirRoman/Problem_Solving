/**
 *    author:  Roman_Emper0r
 *    created: 21-09-2023  20:35:00
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

void solve(){
    
    //vector<int> primes = SieveOfEratosthenes(100000);
    /*cout<<"sz = "<<primes.size()-8000<<endl;
    for(int i = 0; i < primes.size(); i++){
        cout<<primes[i]<<" ";
    }
    cout<<endl;*/
    string s;
    cin>>s;
    vector<int> count_a;
    char ch='A';
    ll tmp=0;
    for(int i=0; i<s.size(); i++)
    {
        if(ch==s[i])
        {
            tmp++;
        }
        else
        {
           if(tmp!=0) count_a.pb(tmp);
            tmp=0;
        }
    }
    if(tmp>0) count_a.pb(tmp);
    ch='B';
    ll ans=0;
    tmp=0;
    for(int i=0; i<s.size(); i++)
    {
        if(ch==s[i])
        {
            tmp++;
        }
        else
        {
            if(tmp > 1) ans+=2;
            else if(tmp==1) ans++;
            tmp=0;
        }
    }
    if(tmp > 1) ans+=2;
            else if(tmp==1) ans++;
    //cout<<ans<<endl;
    sort(count_a.begin(), count_a.end());
    ll sum=0;
    for(int i= count_a.size()-1; i>=0; i--)
    {
        if(ans==0) break;
        sum+=count_a[i];
        ans--;
        
    }
    cout<<sum<<endl;

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


