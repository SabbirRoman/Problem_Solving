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
bool check(string s)
{
    int n=s.size();
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1]) return false;
    }
    return true;
}
void solve(){
    
    //vector<int> primes = SieveOfEratosthenes(100000);
    /*cout<<"sz = "<<primes.size()-8000<<endl;
    for(int i = 0; i < primes.size(); i++){
        cout<<primes[i]<<" ";
    }
    cout<<endl;*/
  
ll n;
string s;
cin>>n>>s;
ll cnt_one=0, cnt_z=0;
bool res=true;
for(int i=0; i<n; i++)
{
    if(s[i]==s[n-(i+1)]) res=false;
    if(s[i]=='0') cnt_z++;
    else cnt_one++;
}
if(cnt_one!=cnt_z) cout<<"-1\n";
else if(res) cout<<"0\n\n";
else
{
    vector<int>res;
    int i=0, j=n-1,ans=0,front=0,front2=0;
    cnt_one=0;
    while(i<j)
    {
       //if(i>0) cout<<front<<" "<<front2<<" "<<i<<endl;
        if(cnt_one==0) front+=front2,front2=0;
        if(cnt_one>0)
        {
            if(s[j]=='0') cnt_one--;
            else {
                ans++;
                //cout<<cnt_one<<endl;
                res.push_back(i+front2+1+((front*2)-2));
                cnt_one++;
                front2++;
            }
            s.pop_back();
        }
        else if(s[i]!=s[j])
        {
            //cout<<i<<" "<<j<<endl;
            i++;
            s.pop_back();
        }
        else if(s[i]=='0')
        {
            //cout<<(j+1+(front*2))<<endl;
            res.push_back(j+1+(front*2));
            ans++;
            i++;
            s.push_back('0');
        }
        else
        {
            //cout<<(i+(front*2))<<endl;
            res.push_back(i+(front*2));
            front++;
            ans++;
            cnt_one++;
            s.pop_back();

        }
        j=s.size()-1;
    }
    cout<<ans<<endl;
    for(int i=0; i<ans; i++)cout<<res[i]<<" ";
        cout<<endl;
}
return;

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


