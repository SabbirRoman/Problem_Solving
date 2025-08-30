    /**
     *    author:  Roman_Emper0r
     *    created: 03.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long



    void solve(){

   ll k;
   cin>>k;
   
   set<ll> prime_factors;
   map<ll, ll> map1;
   for(ll i=2; i*i<=k; i++)
   {
    while(k%i==0)
    {
        prime_factors.insert(i);
        map1[i]++;
        k/=i;
    }
   }

  
   if(k>1)
   {

    prime_factors.insert(k);
    map1[k]++;
    }

   ll n=0;

   for(auto x: prime_factors) 
   {
    int cnt=0;
    for(ll i=1; i<=map1[x]; i++)
    {
        cnt++;
        ll j=i;
        
        while(j%x==0) cnt++,j/=x;
        if(cnt>=map1[x]){

         cnt=i; 
         break;
    }
    }
    //cout<<n<<" "<<cnt<<" "<<x<<endl;
    n=max(n,cnt*x);

   }

    cout<<n<<endl;


    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
           //cin >> t ;
           while(t--){
               solve() ;
           }
           return 0 ;

    }


