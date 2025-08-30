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
              


const ll INF = 1e12 + 5;
const int N = 5e5 + 20 ;
template< typename T > void out(const T& t){std:: cout << t << "\n";}

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
ll Ceil(ll dividend , ll divisor){return dividend / divisor + (dividend % divisor ? 1 : 0);}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
long long binpow(long long a, long long b) { if (b == 0) return 1;long long res = binpow(a, b / 2);if (b % 2) return res * res * a; else return res * res;}
int binpowMod(int a, int b , int mod ){ if(b == 0) return 1 ; int ans = 1 ;while(b > 0){if(b & 1) ans = (ans * a) % mod ;a = (a * a) % mod ;b = b >> 1;}return ans % mod;}
//---------------------------------------------------------------------------------------------

int n , m  ;
char a[3005][3005] ;
int visited[3005][3005] ;

int dfs(int row , int col){
          if(a[row][col] == '#'){
              return 0 ;
          }

          if(visited[row][col] == 1){
                if(a[row][col] == '^' or a[row][col] == '.') return 1 ; 
          }
          visited[row][col] = 1 ;


          int value1 = 0 ;
          if(row + 1 < n ){
                 value1 = dfs(row + 1 , col) ;
          }

          int value2 = 0 ;
          if(row - 1 >= 0 ){
                value2 = dfs(row - 1 , col);
          }

          int value3 = 0 ;
          if(col + 1 < m){
               value3 = dfs(row , col + 1) ;
          }
          
          int value4 = 0 ;
          if(col - 1 >= 0){
              value4 = dfs(row , col - 1) ;
          }

          if(value1 + value2 + value3 + value4 >= 2){
                a[row][col] = '^' ;
                return 1 ;
          }else{
                return 0 ;
          }
}
void solve(){
        cin >> n >> m ;

        for(int i = 0 ; i < 3005 ; i += 1){
              for(int j = 0 ; j < 3005 ; j += 1){
                     visited[i][j] = 0 ;
              }
        }
        for(int i = 0 ; i < n; i += 1){
              string s;
              cin >> s ;
              for(int j = 0 ; j < m ; j += 1){
                     a[i][j] = s[j] ;
              }
        }

        for(int i = 0 ;i < n ; i += 1){
              for(int j = 0 ; j < m ; j += 1){
                     if(a[i][j] == '^' and visited[i][j] == 0){
                            dfs(i , j) ;
                     }
              }
        }
        for(int i = 0 ; i < n ; i += 1){
              for(int j = 0 ; j < m ; j += 1){
                     if(a[i][j] == '^'){
                            int value1 = 0;
                            if(i + 1 < n) value1 += (a[i + 1][j] == '^') ;
                            if(i - 1 >= 0 ) value1 += (a[i - 1][j] == '^') ;
                            if(j + 1 < m ) value1 += (a[i][j + 1] == '^') ;
                            if(j - 1 >= 0) value1 += (a[i][j - 1] == '^') ;
                            
                            if(value1 < 2){
                                   cout << "Impossible\n" ;
                                   return ;
                            }
                     }
              }
             
        }

        cout << "Possible\n" ;
        for(int i = 0 ; i < n; i += 1){
              for(int j = 0 ; j < m ; j += 1){
                     cout << a[i][j] ;
              }
              cout << '\n' ;
        }
}
int32_t main(){   
       ios_base::sync_with_stdio(false);cin.tie(NULL);
       freopen("input.txt" , "r" , stdin) ;
       freopen("output.txt" , "w" , stdout) ;
       int testCase = 1 , T = 1;
       cin >> T;      
       while(testCase <= T){
              cout << "Case #" << testCase << ": ";
              //cout << "Case " << testCase << ": " ; 
              solve();
              testCase++; 
       } 
       return 0; 
}