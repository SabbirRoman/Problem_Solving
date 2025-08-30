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

ll fun1(ll n, ll a[], set<ll>set1, ll mx )
{
    for(int i=0; i<n; i++)
    {
        ll tmp = abs(mx-a[i]);
        std::vector<ll> v;
        for(auto x:set1)
        {
            if(tmp%x) v.emplace_back(x);
        }
        for(int j=0; j<v.size(); j++)
        {
            set1.erase(set1.find(v[j]));
        }
    }
    ll res=1;
    for(auto x:set1) res =max(res,x);
    ll ans=0;
    ll tmp=a[n-1];
    for(int i=n-1; i>=0; i--)
    {
        if(tmp>a[i]){
            ans += (mx-tmp)/res;
            tmp= -10e10;
        }
        tmp -= res;
        ans += (mx-a[i])/res;
    }
    if(a[0]-tmp == res) ans +=(mx-tmp)/res;
    return ans;

}

ll fun2(ll n, ll a[], set<ll>set1, ll mn )
{
    for(int i=0; i<n; i++)
    {
        ll tmp = abs(mn-a[i]);
        std::vector<ll> v;
        for(auto x:set1)
        {
            if(tmp%x) v.emplace_back(x);
        }
        for(int j=0; j<v.size(); j++)
        {
            set1.erase(set1.find(v[j]));
        }
    }
    ll res=1;
    for(auto x:set1) res =max(res,x);
    ll ans=0;
    ll tmp=a[0];
    for(int i=0; i<n; i++)
    {
        if(tmp<a[i]){
            ans += abs(mn-tmp)/res;
            tmp= 10e10;

        }
        tmp += res;
        ans += abs(mn-a[i])/res;
    }
    if(tmp -  a[n-1] == res) ans +=abs(mn-tmp)/res;
    //cout<<ans<<endl;
    return ans;

}



void solve(){
  //cout<<"Bismillah\n";
    ll n;
    cin>>n;
    ll a[n],mx, mn;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    mx=a[n-1];
    mn=a[0];
    set<ll>set1;
    ll tmp = abs(mn-mx);
    for(int i=1; i*i<=tmp; i++)
    {
        if(tmp%i==0)set1.insert(i);
    }
    cout<<fun1(n,a,set1,mx)<<endl;    


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


