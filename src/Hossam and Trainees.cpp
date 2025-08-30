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



   
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t;
           cin>>t ;
           

           
           while(t--){
             int n;
             cin>>n;
             map<ll,ll>map1;
             
             bool ans=false;
             for(int i=0; i<n; i++)
             {
                ll tmp;
                cin>>tmp;
             if(ans==false)   for(int j=1; j*j<=tmp; j++)
                {
                    if(tmp%j==0)
                    {
                        ll tmp2=tmp/j;
                       // cout<<tmp<<" "<<j<<" "<<tmp2<<endl;

                      if(j!=1){
                        
                        if(map1[j]>0){
                            ans=true;
                            break;
                        }
                        map1[j]++;
                    }
                      
                        if(map1[tmp2]>0 && j!=tmp2){
                            ans=true;
                            break;
                        }
                        map1[tmp2]++;

                        
                    }

                }
             }
             if(ans) cout<<"YES\n"; //<<endl;
             else cout<<"NO\n";
           }
           return 0 ;

    }

/* YouKnowWho*/
//     #include<bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 9;

// int spf[N];
// vector<int> primes;
// void sieve() {
//   for(int i = 2; i < N; i++) {
//     if (spf[i] == 0) spf[i] = i, primes.push_back(i);
//     int sz = primes.size();
//     for (int j = 0; j < sz && i * primes[j] < N && primes[j] <= spf[i]; j++) {
//       spf[i * primes[j]] = primes[j];
//     }
//   }
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   sieve();
//   int t; cin >> t;
//   while (t--) {
//     int n; cin >> n;
//     map<int, int> cnt;
//     for (int i = 1; i <= n; i++) {
//       int x; cin >> x;
//       for (auto p: primes) {
//         if (p <= x / p) {
//           if (x % p == 0) {
//             while (x % p == 0) {
//               x /= p;
//             }
//             cnt[p]++;
//           }
//         }
//         else break;
//       }
//       if (x > 1) {
//         cnt[x]++;
//       }
//     }
//     bool ok = false;
//     for (auto [p, c]: cnt) {
//       ok |= c >= 2;
//     }
//     if (ok) {
//       cout << "YES\n";
//     }
//     else {
//       cout << "NO\n";
//     }
//   }
//   return 0;
// }


