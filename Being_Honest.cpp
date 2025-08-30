/**
 *    author:  Roman_Emper0r
 *    created: 15-08-2023  21:27:30
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define          sz(a)               (int)a.size()
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define ii pair<int, int>

ll count_fun(ll a, ll b, ll d)
{
    ll tm1=10;
        tm1=abs(a-b)/d;
        if(abs(a-b)%d) tm1++;
        //cout<<tm1<<endl;
        return tm1;
}

void solve(){

 
      //cout<<"Bismillah\n";
    ll n,m,d;
    cin>>n>>m>>d;
    ll s[m];
    ll ans1=1, tmp1=1;
    for (int i = 0; i < m; ++i)
    {
        cin>>s[i];
        ans1+=count_fun(s[i],tmp1,d);
        
        tmp1=s[i];
    }
    
    ans1+=(n-s[m-1])/d;
    //cout<<"real ans : "<<ans1<<endl;

    ll tmp=1,ans=1,cnt=0;
    map<ll,ll>mp1;

    for(int i=1; i<m; i++)
    {
        ll tm1,tm2;
        tm1=count_fun(s[i],tmp,d);
         tm2=count_fun(s[i-1],tmp,d) + count_fun(s[i-1], s[i], d);
         if(cnt<(tm2-tm1)) cnt=tm2-tm1;

         if(cnt==(tm2-tm1)) mp1[cnt]++;
         ans+=count_fun(s[i-1],tmp,d);
         tmp=s[i-1];

    }
    ll tm1,tm2;
        tm1=count_fun(n,tmp,d);
         tm2=count_fun(s[m-1],tmp,d) + (n-s[m-1])/d;
         if(cnt<(tm2-tm1)) cnt=tm2-tm1;

         if(cnt==(tm2-tm1)) mp1[cnt]++;
         ans+=count_fun(s[m-1],tmp,d);
       
    tmp=s[m-1];
    ans+=(n-tmp)/d;

    cout<<ans-cnt<<" "<<mp1[cnt]<<endl;


    
   
   
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


