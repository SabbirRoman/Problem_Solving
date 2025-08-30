    /**
     *    author:  Roman_Emper0r
     *    created: 16.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first
    #define pb push_back



    void solve(){
     ll n;cin>>n;
     ll tmp1,tmp2,tmp3,mod=1e9+7;
     tmp1=n*(n+1);

     tmp1%=mod;
     tmp1*=((2*n)+1);
     tmp1*=2;
     tmp1%=mod;

     tmp3=3*(n+1)*n;
     tmp3%=mod;
     ll ans=(tmp1-tmp3)*337;
     ans%=mod;
     cout<<(ans+mod)%mod<<endl;

     //cout<<(4+(-30)%4)%4<<endl;


    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
           cin>>t ;
           
           while(t--){
                
               solve() ;
           }
           return 0 ;

    }


