    /**
     *    author:  Roman_Emper0r
     *    created: 18th_Jan_2023
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first
    #define pb push_back
    
    void solve(){
       ll l,r;
       cin>>l>>r;
       if(r-l>8) cout<<"0"<<endl;
       else
       {
        ll ans=1e18;
        for(ll i=l; i<=r; i++)
        {
            ll num=i,dg=1;
            while(num)
            {
                dg*=(num%10);
                num/=10;
            }
            ans=min(ans,dg);
        }
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


