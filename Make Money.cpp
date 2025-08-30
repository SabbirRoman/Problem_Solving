    /**
     *    author:  Roman_Emper0r
     *    created: 07.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first



    void solve(){

        ll n,x,c,p=0;
        cin>>n>>x>>c;
        ll ans=0;
        while(n--)
        {
            ll tmp;
            cin>>tmp;
            ans+=tmp;
            ans+=max(p,((x-tmp-c)));
        }
        cout<<ans<<endl;
        
    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t;
           cin>>t ;
           
           while(t--){
               solve() ;
           }
           return 0 ;

    }


