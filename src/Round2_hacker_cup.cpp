/**
 *    author:  Roman_Emper0r
 *    created: 21-10-2023  23:00:00
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


bool visited[500][500];


//set<int> primes = SieveOfEratosthenes(200);
int fun3(vector<string> v,int i, int j)
{
    int tmp=0;
    for(int p=j-1; p>=0; p--)
    {
        // if(v[p][j]=='W' )
        // {
        //     if(i-1>=0 && v[i-1][p]=='.') tmp--;
        //     if(i+1 < v.size() && v[i+1][p]=='.') tmp--;
        //    // break;
        // }
        if(v[i][p]=='.')
        {
            tmp++;
            break;
        }
         if(v[i][p]=='B')
        {
            
            break;
        }
    }
    for(int p=j+1; p<v[0].size(); p++)
    {
        //  if(v[p][j]=='W' )
        // {
        //     if(i-1>=0 && v[i-1][p]=='.') tmp--;
        //     if(i+1 < v.size() && v[i+1][p]=='.') tmp--;
        //    // break;
        // }
        if(v[i][p]=='.')
        {
            tmp++;
            break;
        }
         if(v[i][p]=='B')
        {
            
            break;
        }
    }

    return tmp;

}
int fun1(vector<string> v,int i, int j)
{
    int tmp=0;
    for(int p=i-1; p>=0; p--)
    {
        // if(v[p][j]=='W' )
        // {
        //     if(i-1>=0 && v[i-1][p]=='.') tmp--;
        //     if(i+1 < v.size() && v[i+1][p]=='.') tmp--;
        //    // break;
        // }
        if(v[p][j]=='.')
        {
            tmp++;
            break;
        }
         if(v[p][j]=='B')
        {
            
            break;
        }
    }
    for(int p=i+1; p<v.size(); p++)
    {
        //  if(v[p][j]=='W' )
        // {
        //     if(i-1>=0 && v[i-1][p]=='.') tmp--;
        //     if(i+1 < v.size() && v[i+1][p]=='.') tmp--;
        //    // break;
        // }
        if(v[p][j]=='.')
        {
            tmp++;
            break;
        }
         if(v[p][j]=='B')
        {
            
            break;
        }
    }

    return tmp;

}
std::pair<ll,ll> fun2(vector<string> v,int i, int j)
{   ll tmp=0,cnt=0;
    if(i<0 || j<0 || i==v.size() || j==v[0].size()) return make_pair(tmp, cnt);
    if(visited[i][j]==true) return make_pair(tmp, cnt);
    visited[i][j]=true;
    
    if(v[i][j]=='.') return make_pair(tmp-1, cnt);
    if(v[i][j]=='B') return make_pair(tmp, cnt);
    

    if(v[i][j]=='W' )
    {   
    pair<ll,ll>tmp1 = fun2(v, i-1, j);
    pair<ll,ll>tmp2 =fun2(v,i,j-1) ;
    pair<ll,ll>tmp3 = fun2(v,i+1,j);
    pair<ll,ll>tmp4 =fun2(v,i,j+1);
    tmp = tmp1.first+tmp2.first+tmp3.first+tmp4.first;
    cnt =1+ tmp1.second+tmp2.second+tmp3.second+tmp4.second;

    }

     return make_pair(tmp, cnt);

}
void solve(){
    
vector<vector<ll>>count;
 ll r,c;
 cin>>r>>c;
 vector<string> v;
 
 
 for(int i=0; i<r; i++)
 {
    string s;
    cin>>s;
    v.pb(s);
 }
ll ans=0;

     for(int p = 0; p<r; p++)
        {
            for(int jj=0; jj<c; jj++) visited[p][jj]=false;
        }
 for(int i=0; i<r; i++)
 {
    for(int j=0; j<c; j++)
    {
        //cout<<count[i][j]<<endl;
        if(v[i][j]=='W')
        {
            ll z=0;
            pair<ll,ll> tmp = fun2(v,i,j) ;
            //cout<<tmp<<" ";
           if(tmp.first==-1)
           {
           // cout<<"Yes\n";
            ans=max(ans,tmp.second);
            
           }
           for(int p = 0; p<r; p++)
        {
            for(int jj=0; jj<c; jj++) visited[p][jj]=false;
        }
        }

    }
    //if(ans) break;
    
 }


  cout<<ans<<endl;





}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("hack_out2.txt","w",stdout);
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

