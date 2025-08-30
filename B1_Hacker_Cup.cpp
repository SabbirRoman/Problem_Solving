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

set<int> primes ={2,3,5,7,11,13,17,19, 23, 29, 31, 37, 41};



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
//set<int> primes = SieveOfEratosthenes(200);
void solve(){
    
    
    // cout<<"sz = "<<primes.size()-8000<<endl;
   

    ll p, sum=0, flag= 0;
    cin>>p;

    vector<int >v;
    //for(auto x : primes) cout<<x<<endl;
     for(auto x: primes)
    {
        while(p)
        {
            if(p%x==0)
            {
                v.pb(x);
                p /=x;
                sum +=x;
            }
            else break;
            //cout<<p<<" "<<x<<endl;
            flag++;
            if(flag >1000){
                cout<<"guuuu";
                return;
            }
        }
    }

    if(p > 1) {
        sum +=p;
        v.pb(p);
     }

     if(sum > 41) cout<<"-1"<<endl;
     else
     {
        cout<<v.size() + (41-sum)<<" ";
        for(int i=sum; i<41; i++)cout<<"1 ";
        for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
        cout<<endl;
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
       // primes = SieveOfEratosthenes(200);
        int test=t;
    
       while(t--){
        cout<<"Case #"<<test-t<<": ";
           solve() ;
       }
       return 0 ;

}

