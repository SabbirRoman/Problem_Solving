//ami pari na ar pari na
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std ;
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
#define                sz(x) (int)(x.size())
#define                int    long long int
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
              


const ll INF = 1e18 ;
const int N = 2e5 + 10  ;

// Global Variablea
int dx[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy[]={1, -1, 0, 0, 1, -1, 1, -1};

ll ncr[1001][1001] = {0};
void paslcaleTringle(){
ncr[0][0] = 1;
for(int i = 1 ; i < 1001 ; i++){
    ncr[i][0] = 1;
    for(int j = 1; j < i + 1 ; j++){
              ncr[i][j] = (ncr[i - 1][j - 1] + ncr[i - 1][j]);
              }
       }
}
//---------------------------------------------------------------------------------------------
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
ll Ceil(ll dividend , ll divisor){return (dividend / divisor +  (dividend % divisor ? 1 : 0));}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
long long binpow(long long a, long long b) { if (b == 0) return 1;long long res = binpow(a, b / 2);if (b % 2) return res * res * a; else return res * res;}
int binpowMod(int a, int b , int mod ){ if(b == 0) return 1 ; int ans = 1 ;while(b > 0){if(b & 1) ans = (ans * a) % mod ;a = (a * a) % mod ;b = b >> 1;}return ans % mod;}
//---------------------------------------------------------------------------------------------


class DSU {
       public : 
            int parent[N] ;
            int sizeOfSet[N] ;

            DSU(int n){
                 memset(sizeOfSet , 0 , sizeof(sizeOfSet)) ;
                 for(int i = 1 ; i <= n ; i += 1){
                        makeRoot(i) ;
                 }
            }
            void makeRoot(int v){
                    parent[v] = v ;
                    sizeOfSet[v] = 1 ;
            }

            int findRoot(int v){
                     if(v == parent[v]) return v ;
                     return parent[v] = findRoot(parent[v]) ;
            }

            void unionRoot(int a , int b ){
                  a = findRoot(a) ;
                  b = findRoot(b) ;
                  if(a != b){
                          if(sizeOfSet[a] < sizeOfSet[b]) swap(a , b) ;
                          parent[b] = a ;
                          sizeOfSet[a] += sizeOfSet[b] ;
                  }
            }
};

//vector<int > primes = sieve(1000000) ;
void solve(){
       int x , y ;
       cin >> x >> y ;
      
       if(x < y or x % y != 0){
            cout << x << '\n' ;
            return ;
       }
       
    //    int temp = y ;
    //    vector<int > factors , divisors ;
    //    divisors.push_back(y) ;
    //    for(int i = 0 ; primes[i] * primes[i] <= temp ; i += 1){
    //           if(temp % primes[i] == 0){
    //                divisors.push_back(primes[i]) ;
    //                 while(temp % primes[i] == 0){
    //                      divisors.push_back(temp) ;
    //                       factors.push_back(primes[i]) ;
    //                       temp /= primes[i] ;
    //                 }
    //           }
    //    }

    //    if(temp > 1){
    //          factors.push_back(temp) ;
    //          divisors.push_back(temp) ; 

    //    }
    //    for(auto it : divisors) cout << it << ' ' ;
    //    cout << '\n' ;


    vector<int > divisors ;

    for(int i = 1 ; i * i <= y ; i += 1){
           if(y % i == 0){
                 if(i != y / i){
                       divisors.push_back(i) ;
                       divisors.push_back(y / i) ;
                 }else{
                       divisors.push_back(i) ;
                 }
           }
    }

    for(auto it : divisors) cout << it << ' ' ;
    cout << '\n' ;
    int mx = 1 ;
    for(int i  = 0 ; i < sz(divisors) ; i += 1){
            int temp = x / divisors[i] ;
            cout << temp << '\n' ;
            // if(temp % y != 0){
            //     cout << "HI\n" ;
            //       mx = max(temp , mx) ;
            // }
    }

    cout << mx << '\n' ;
}
int32_t main(){   
       ios_base::sync_with_stdio(false);cin.tie(NULL);
       freopen("input.txt" , "r" , stdin) ;
       freopen("output.txt" , "w" , stdout) ;
       int testCase = 1 , T = 1;
       cin >> T;            
       while(testCase <= T){
              //cout << "Case #" << testCase << ": ";
              //cout << "Case " << testCase << ": " ;   
              //cout << "Scenario #" << testCase << ": " ;
              solve();
              testCase++; 
       } 
       return 0; 
} 

//bod