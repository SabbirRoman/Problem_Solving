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
       
    ll n,k;
    cin>>n>>k;
    ll sum=0,a[n];
    for(int i=0; i<n; i++)
    {
       
        cin>>a[i];
        sum+=a[i];
        
    }
    ll sum2=0,index=1;
    vector<ll>ans;
    for(int i=0; i<n; i++)
    {

        sum2+=a[i];
      //cout<<i<<" "<<sum2<<endl;
        if(sum2%2)
        {
            //cout<<index<<" "<<i<<endl;
           if(k!=1) ans.push_back(i+1);
           else ans.push_back(n);
           
            sum2=0;
            k--;
        }
        if(k==0) break;
          sum-=a[i];

    }
    if(k!=0 || sum%2==0) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(auto x : ans)cout<<x<<" ";
            cout<<endl;
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
           cin>>t ;
           
        
        
           while(t--){
                
               solve() ;
           }
           return 0 ;

    }


