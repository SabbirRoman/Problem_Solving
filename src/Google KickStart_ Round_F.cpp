#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
   int t;
   cin>>t;
   int test=t;
   while(t--){
    ll n,d,k;
    cin>>d>>n>>k;
    ll h[n+5],s[n+5],e[n+5];
   
    for(int i=1;i<=n; i++){
        cin>>h[i]>>s[i]>>e[i];
        
    }
    ll ans=0;
    for(int i=1;i<=d; i++){
       ll res=0;
       std::vector<ll> v;
        for(int j=1; j<=n; j++){

        if(i>=s[j] && i<=e[j]){
            v.push_back(h[j]);
        }
        
    } res=0;
    if(v.size()>0){
    sort(v.begin(), v.end(), greater<ll>());
    ll k1=v.size();
    k1=min(k,k1);
    for(int z=0; z<k1; z++)res+=v[z];
}
        //cout<<res<<endl;
        ans=max(ans,res);
    }
    
    
        
    cout<<"Case #"<<test-t<<": "<<ans<<endl;
    
    }
   
}