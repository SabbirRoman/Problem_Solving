    /**
     *    author:  Roman_Emper0r
     *    created: 04.12.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first


    bool comparefn(lpr a, lpr b)
{
    if((a.S*b.F)>=(a.F*b.S))
    return false;
    return true;
}

    void solve(){

   int n;
   cin>>n;
   vector<lpr> a;
   vector<ll> v;
   for(int i=0; i<n; i++)
   {
    ll tmp;
    cin>>tmp;
    v.push_back(tmp);
   }
   for(int i=0; i<n; i++)
   {
    ll tmp;
    cin>>tmp;
    a.push_back(make_pair(v[i],tmp));
   }
    sort(a.begin(),a.end(),comparefn);
   //sort(a.begin(),a.end());

    // for(int i=0; i<n; i++)
    // {
    //     cout<<a[i].F<<" "<<a[i].S<<endl;

    // }
    // cout<<"\n\n";

    ll tmp=0,ans=0;

    for(int i=0; i<n; i++)
    {
        ans+=(tmp*a[i].S);
        tmp+=a[i].F;
    }
    cout<<ans<<endl;


    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
           cin >> t ;
           while(t--){
               solve() ;
           }
           return 0 ;

    }


