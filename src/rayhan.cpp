//ami pari na ar pari na
  #include<bits/stdc++.h>
  #include <ext/pb_ds/assoc_container.hpp>
  #include <ext/pb_ds/tree_policy.hpp>

  using namespace std;
  using namespace __gnu_pbds;

  #define                pb push_back
  #define                mp make_pair
  #define                in insert
  #define                fi first
  #define                se second

  #define                ll long long 
  #define                ld long double
  #define                ull unsigned long long 
  #define                pi acos(-1)
  #define                test() int T,t=1;cin>>T;
  #define                all(x) (x).begin(),(x).end()
  #define                sz(x) (ll)(x.size())
  #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
    


  const ll INF = 1e12 + 5;
  const ll mod = 998244353;
  const int N = 1e6 + 1 ;

  template< typename T > void out(const T& t){std:: cout << t << "\n";}
  template <typename T>
  void print(const vector<T>& V){
    for(int i = 0; i < V.size(); i++)
      cout << V[i] << " ";
    cout<< endl;
  }
  // Global Variablea
  int dx[]={0, 0, 1, -1, 1, 1, -1, -1};
  int dy[]={1, -1, 0, 0, 1, -1, 1, -1};

  //---------------------------------------------------------------------------------------------
  bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
  ll Ceil(ll dividend , ll divisor){return dividend / divisor + (dividend % divisor ? 1 : 0);}
  vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
  long long binpow(long long a, long long b) { if (b == 0) return 1;long long res = binpow(a, b / 2);if (b % 2) return res * res * a; else return res * res;}
  ll binpowMod(ll a, ll b) { if (b == 0) return 1; ll res = binpow(a, b / 2) % mod;if (b % 2) return (res * res * a) % mod; else return (res * res) % mod;}

  //---------------------------------------------------------------------------------------------



void solve(){  
       string s;
       int n;
       cin >> n >> s;

       int moves = 0 ;
       vector<pair<int , int >> ans;

       for(int i = 0 ; i < n ; i++){
            char c = s[i];
            if(moves % 2 != 0){
                 if(c == '0') c = '1';
                 else c = '0';
            }

            if(c == '1'){
                  int start = i + 1;
                  int end = n ;
                  ans.pb({start , end});
                  moves += 1;
            }
       }

       cout << moves << '\n';
       for(int i = 0 ; i < (int) ans.size() ; i++){
             cout << ans[i].first << ' ' << ans[i].second << '\n';
       }
}



int32_t main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int testCase = 1 , T = 1;
   cin >> T;
  
   while(testCase <= T){
       solve();
       testCase++;
    }

    return 0;
  }