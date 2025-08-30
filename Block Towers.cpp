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

     ll fun(ll a,ll b, ll c,ll d)
     {
       return (((a-c)*(a-c))+((b-d)*(b-d)));
     }

    void solve(){
   ll n;
   cin>>n;
   ll a[n+5];
  
   ll ans=1;
   for(int i=0; i<n; i++)cin>>a[i];
    ll tmp=a[0];
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(tmp<a[i])
        {
            if((a[i]-tmp)%2) tmp+=((a[i]-tmp)/2)+1;
            else tmp+=(a[i]-tmp)/2;
            
        }
    }
    cout<<tmp<<endl;


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


