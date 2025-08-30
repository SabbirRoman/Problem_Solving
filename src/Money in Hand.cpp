    /**
     *    author:  Roman_Emper0r
     *    created: 22th_Jan_2023
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first
    #define pb push_back
    
    void solve(){
    ll n,x;
    cin>>n>>x;

    int a[n],b[n];
    for(int i=0; i<n; i++)cin>>a[i]>>b[i];
        //for(int i=0; i<n ; i++)cout<<a[i]<<" "<<b[i]<<endl;
    bool dp[x+1];
    
    for(int i=0; i<=x; i++) dp[i]=0;

    dp[0]=true;

   
       
     for(int j=0; j<n; j++)
    { 
        while(b[j])
        {
             for(int i=x; i>=0; i-- )
            
            {
                if( i-a[j]>=0 && dp[i-a[j]] && b[j]>0)
                {
                    dp[i]=true;
                   
                    
                }
            }
            b[j]--;
        }
    }
       

    //for(int i=0; i<=x; i++) cout<<dp[i]<<" ";

    if(dp[x]) cout<<"Yes\n";
    else cout<<"No\n";


      
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


