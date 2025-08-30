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




void solve(){
  ll n,m,l;
  cin>>n>>m>>l;
  vector<pair<int,int>> v1,v2;
  for(int i=0; i<n; i++)
  {
    int tm;
    cin>>tm;
    v1.push_back({tm,i+1});
  }
  for(int i=0; i<m; i++)
  {
    int tm;
    cin>>tm;
    v2.push_back({tm,i+1});
  }
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  set<pair<int,int>> st;
  for(int i=0; i<l; i++)
  {
    int a,b; cin>>a>>b;
    st.insert({a,b});
  }
  map<int,int>mp1,mp2;
  for(int i=n-1; i>=0; i--)
  {int ans=0;
    if(mp1[i]>0) continue;
    for(int j=m-1; j>=0; j--)
    {
        if(mp2[j]>0) continue;
        pair<int, int> myPair = std::make_pair(i, j);
        auto it = st.find(myPair);
        if (it != st.end()) {
        mp1[i]++;
        mp2[j]++;
    } else {
        ans = max(ans, v1[i].first+v2[j].first);
    }

    cout<<ans<<endl;

    }
  }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
      //cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


