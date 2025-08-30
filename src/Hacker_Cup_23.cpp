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




void solve(){
    
   ll s,d,k;
   cin>>s>>d>>k;
   ll need_cheez = k, need_buns = k+1;
   ll have_cheez = s+ 2*d, have_buns = 2*s +  2*d;

   if(have_buns >= need_buns && have_cheez >= need_cheez) cout<<"YES"<<endl;
   else cout<<"NO\n";


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
       int test=t;
        
    
       while(t--){
        cout<<"Case #"<<test-t<<": ";
           solve() ;
       }
       return 0 ;

}


