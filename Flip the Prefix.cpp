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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    s+='2';
    ll a[n+1],cnt=0,p=0;
    for(int i=n-1; i>=0; i--)
    {
      if(s[i]=='0')p=1;
      if(p)
      {
        if(s[i]!=s[i+1]) cnt++;

      }
      a[i]=cnt;
    }
    a[n]=0;
    ll ans=1e9;

    
       for(int i=0; i<=n-k; i++)
       {
        if(s[i+k-1]=='1')
        {
          ans=min(ans,(a[i]-a[i+k-1]));
        }
        else
        {
          ans=min(ans,(a[i]-(a[i+k-1]-1)));
        }

       }
       cout<<ans<<endl;
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


