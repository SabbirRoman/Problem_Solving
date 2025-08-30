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
    cin>>d>> n>>k;
    ll h[n+5],s[n+5],e[n+5],sum[d+5];

    for(int i=0; i<=d+1; i++)sum[i]=0;

    for(int i=1;i<=n; i++){
        cin>>h[i]>>s[i]>>e[i];
        int tm=s[i];
        sum[tm]+=h[i];
        tm=e[i];
        sum[tm+1]-=h[i];
    }

    
   ll res=-1;
    for(int i=1;i<=d; i++){
        sum[i]+=sum[i-1];
        
        if(sum[i]>res){
            res=sum[i];
        }

    } vector<int>index;
    for(int i=1;i<=d; i++){
        if(res==sum[i])index.push_back(i);

    }
    ll ans=0;
    for(int j=0; j<index.size();j++){
    vector<ll> v;
    for(int i=1; i<=n; i++){
        if(index[j]>=s[i] && index[j]<=e[i]){
            v.push_back(h[i]);
        }
        
    } res=0;
    sort(v.begin(), v.end(), greater<ll>());
    
    ll k1=v.size();
    k1=min(k,k1);
    for(int z=0; z<k1; z++)res+=v[z];
        ans=max(ans,res);
}

    cout<<"Case #"<<test-t<<": "<<ans<<endl;
    
    }
   
}