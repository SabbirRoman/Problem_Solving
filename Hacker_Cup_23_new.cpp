/**
 *    author:  Roman_Emper0r
 *    created: 25-09-2023  20:35:00
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
  ll n;
  cin>>n;
  ll nn= 2*n - 1;
  ll a[nn];
  map<ll,ll>mp;
  for(int i=0; i<nn; i++)
  {
    cin>>a[i];
    mp[a[i]]++;
  }
  sort(a,a+nn);
  ll temp1[n-1], temp2[n-1];
  for(int i=0; i<n-1; i++) temp1[i] = a[i];
  
  ll threashold= a[n-1];

  for(int i=n; i<nn; i++) temp2[i-n]= a[i];

    sort(temp2, temp2 + n-1, greater<int>());

// cout<<endl;
//     for(int i=0; i<n-1; i++) cout<<temp1[i]<<" "<<temp2[i]<<endl;
// cout<<"threashold "<<threashold<<endl;

    ll ans= temp1[0] + temp2[0];
    bool flag = true;

    for(int i=0; i<n-1; i++)
    {
        if(ans != (temp1[i] + temp2[i]))
        {
            flag = false;
            break;
        }
    }
    if(flag && ans> threashold) {
        //cout<<"ekhane";
        cout<<ans - threashold<<endl;
        return;
    }
    flag = true;

    ans= threashold + temp1[n-2];
    ll tmp=0;
    for(int i=0; i<nn; i++)
    {
        ll bb= ans - a[i];
        //mp[a[i]]--;
        if(mp[bb]>0 && bb>0) mp[bb]--;
        else
        {
            //cout<<"ekhane "<<a[i]<<" "<<bb<<endl;
            threashold = a[i];
            tmp++;
        }
        if(tmp>1)
        {
            //cout<<"ekhane"<<endl;
            flag = 0;
           // break;
        }
    }
      if(flag && (ans> threashold)) {
        //cout<<"Hello "<<flag<<" "<<tmp<<" "<<threashold<<endl;
        cout<<ans - threashold<<endl;
        return;
    }
   

     for(int i=0; i<nn; i++)
      {
        
        mp[a[i]]=0;
      }
       for(int i=0; i<nn; i++)
      {
        
        mp[a[i]]++;
      }

      flag = true;
    threashold = a[n-1];
    ans= threashold + temp2[n-2];
    
     tmp=0;
    for(int i=0; i<nn; i++)
    {
        ll bb= ans - a[i];
        //mp[a[i]]--;
        if(mp[bb]>0) mp[bb]--;
        else
        {
            threashold = a[i];
            tmp++;
        }
        if(tmp>1)
        {
            flag = false;
            break;
        }
    }
    if(flag && ans> threashold) {
        cout<<ans - threashold<<endl;
        return;
    }

    if(!flag) cout<<"-1"<<endl;

    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("h_cup.txt","w",stdout);
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


