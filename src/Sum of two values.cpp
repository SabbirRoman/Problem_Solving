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
     ll n,x;
     cin>>n>>x;

     map<ll,ll>mp,mp2;
     vector<ll> v;

     for(int i=0; i<n; i++)
     {
        ll tmp;
        cin>>tmp;
        v.pb(tmp);
        mp[tmp]++;
        if(mp[tmp]<=2)
        {
            mp2[tmp]+=(i+1);
        }
     }
     ll ans=-1,ans2;
     for(int i=0; i<n; i++){
        ll tmp=x-v[i];
        ans2=i+1;
        mp2[v[i]]-=ans2;
        mp[v[i]]--;
        if(mp[tmp]>0)
        {
            ans=mp2[tmp];
            break;
        }
     }

     if(ans==-1) cout<<"IMPOSSIBLE\n";
     else cout<<ans2<<" "<<ans<<endl;



              

    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
          // cin>>t ;
           
           while(t--){
                
               solve() ;
           }
           return 0 ;

    }


