    /**
     *    author:  Roman_Emper0r
     *    created: 29th_Jan_2023
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first
    #define pb push_back
    #define nl '\n'

 
 
    
    void solve(){
     ll n,s;
     cin>>n>>s;

     ll p,q,p1,q1;
     vector<lpr>v;
     for(int i=0; i<n; i++)
     {
        ll tm;
        cin>>tm;
        if(i==0) p=tm,p1=tm;
        else if(i==n-1) q=tm;
        else 
        {
            ll a,b;
            if(tm>s) a=tm-s,b=s;
            else a=tm, b=0;
            if(b>a) swap(a,b);
            v.push_back({a,b});
        }


     }
     ll sz=v.size(),ans=0,ans1=0;
     for(int i=0; i<v.size(); i++)
     {
        ll r1,r2;
        if(i==sz-1) r1=q,r2=q;
        else r1=v[i+1].F, r2= v[i+1].S;

        ll a=v[i].F,b=v[i].S;

        // vector<lpr>huhu;
        // huhu.pb({(p*a)+(r1*b),1});
        //  huhu.pb({(p*a)+(r2*b),2});
        //   huhu.pb({(p*b)+(r1*a),3});
        //    huhu.pb({(p*b)+(r2*a),4});
        //    sort(huhu.begin(), huhu.end());

        //cout<<a<<" "<<b<<nl;
           if(a<b)
           {
            ans+=(p*a);
            ans1+=(p1*b);
            p=b;
            p1=a;
           }
           else
           {
            ans+=(p*b);
            ans1+=(p1*a);
            p=a;
            p1=b;
           }

     }
     ans+=(p*q);
     ans1+=(p1*q);

     // reverse(v.begin(), v.end());
     // ll ans1=ans;
     // ans=0;
     // p=p1,q=q1;
     //      for(int i=0; i<v.size(); i++)
     // {
     //    ll r1,r2;     for(int i=0; i<v.size(); i++)
     // {
     //    ll r1,r2;
     //    if(i==sz-1) r1=q,r2=q;
     //    else r1=v[i+1].F, r2= v[i+1].S;

     //    ll a=v[i].F,b=v[i].S;

     //    vector<lpr>huhu;
     //    huhu.pb({(p*a)+(r1*b),1});
     //     huhu.pb({(p*a)+(r2*b),2});
     //      huhu.pb({(p*b)+(r1*a),3});
     //       huhu.pb({(p*b)+(r2*a),4});
     //       sort(huhu.begin(), huhu.end());

     //       if(huhu[0].S==1 || huhu[0].S==2)
     //       {
     //        ans+=(p*a);
     //        p=b;
     //       }
     //       else
     //       {
     //        ans+=(p*b);
     //        p=a;
     //       }

     // }
     //    if(i==sz-1) r1=q,r2=q;
     //    else r1=v[i+1].F, r2= v[i+1].S;

     //    ll a=v[i].F,b=v[i].S;

     //    vector<lpr>huhu;
     //    huhu.pb({(p*a)+(r1*b),1});
     //     huhu.pb({(p*a)+(r2*b),2});
     //      huhu.pb({(p*b)+(r1*a),3});
     //       huhu.pb({(p*b)+(r2*a),4});
     //       sort(huhu.begin(), huhu.end());

     //       if(huhu[0].S==1 || huhu[0].S==2)
     //       {
     //        ans+=(p*a);
     //        p=b;
     //       }
     //       else
     //       {
     //        ans+=(p*b);
     //        p=a;
     //       }

     // }

     cout<<min(ans1,ans)<<nl;


      
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


