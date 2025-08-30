    /**
     *    author:  Roman_Emper0r
     *    created: 11.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first

    const int N = 3163;

int spf[N];
vector<int> primes;
void sieve() {
  for(int i = 2; i < N; i++) {
    if (spf[i] == 0) spf[i] = i, primes.push_back(i);
    int sz = primes.size();
    for (int j = 0; j < sz && i * primes[j] < N && primes[j] <= spf[i]; j++) {
      spf[i * primes[j]] = primes[j];
    }
  }
}


    void solve(){
        ll n,m;
        cin>>n>>m;
        
        if(__gcd(n,m)>1) cout<<"0\n";
        else if(n%2 && m%2) cout<<"1\n";
        else if(abs(n-m)==1) cout<<"-1\n";
        else
        {

    
        ll ans=0;
        while(__gcd(n,m)==1)
        {
            ans++;
            n++;
            m++;
        }

//       for (auto p: primes) {

//         if(n%p == m%p)
//         {
// //cout<<p<<" "<<p-(n%p)<<endl;
//             ans=min(ans, p-(n%p));
//             break;
//         }
//       }
     
     
      cout<<ans<<endl;
    
        }
    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t;
           cin>>t ;
           
           while(t--){
                //sieve();
               solve() ;
           }
           return 0 ;

    }


