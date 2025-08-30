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
    string s1, s2;
    cin>>s1>>s2;
    int n=s1.size(), m=s2.size();
    vector<int> r_o,r_z, c_o, c_z;
    vector<vector<int >> matrix(n , vector<int>(m , 0)) ;
    int ans=1;
    map<int,int>mp1,mp2;
    for(int i=0; i<n; i++)
    {
        if(s1[i]=='1') {
            r_o.pb(i);
            mp1[i]++;
        }
        else r_z.pb(i);
    }
    for(int i=0; i<m; i++)
    {
        if(s2[i]=='1') {
            c_o.pb(i);
            mp2[i]++;
        }
        else c_z.pb(i);
    }

    if(c_o.size() == r_o.size())
    {
         for(int i = 0 ; i < r_o.size() ; i += 1){
            matrix[r_o[i]][c_o[i]] = 1 ;
        }
    }
    else if(c_o.size() > r_o.size()){

        int tmp= c_o.size()-r_o.size();
        if(tmp <= (n-r_o.size()) && tmp%2==0) ans =1;
        else ans=-1;
                for(int i = 0 ; i < r_o.size() ; i += 1){
           
            matrix[r_o[i]][c_o[i]] = 1 ;
            tmp--;
        

        }
        //if(tmp>0) ans=-1;
        for(int i = r_o.size() ; i < c_o.size() ; i += 1){
            matrix[0][c_o[i]]=1;
        }
    }
    else
    {

         int tmp= r_o.size()-c_o.size();
        if(tmp <= (m-c_o.size()) && tmp%2==0) ans =1;
        else ans=-1;
        for(int i = 0 ; i < c_o.size() ; i += 1){
            matrix[r_o[i]][c_o[i]] = 1 ;
        }
        for(int i = c_o.size() ; i < r_o.size() ; i += 1){
          
            matrix[r_o[i]][0]=1;
            tmp--;
      
        }
       // if(tmp>0) ans=-1;
    }

    if(ans==1)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++) cout<<matrix[i][j]<<" ";
                cout<<endl;
        }
    }
    else
    {
        cout<<ans<<endl;
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


