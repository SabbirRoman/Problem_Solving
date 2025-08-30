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
       
        ll a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;

        ll steps=0, ans=((a-d)*(a-d))+((b-e)*(b-e))+((c-f)*(c-f));
        
        for(int i=0; i<=100000; i++)
        {
           // cout<<a<<" "<<b<<" "<<c<<endl;
            ll tmp=((a-d)*(a-d))+((b-e)*(b-e))+((c-f)*(c-f));
            if(tmp>=1e18) break;
            if(ans>tmp) ans=tmp,steps=i;

            ll a1,b1,c1;
            b1=a/2;
            a-=b1;
            a1=b*3;
            c1=b/2;
            b-=c1;
            a1+=c;
            c-=c;
            a=a1;
            b=b1;
            c=c1;
            //cout<<tmp<<endl;
        }
        cout<<ans<<" "<<steps<<endl;
      
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


