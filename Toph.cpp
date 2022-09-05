#include <bits/stdc++.h>

#define ll long long
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    ll n,k;
    cin>>n>>k;

    ll a[n+5],sum=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    ll sum2=sum;
    if(sum%k || k>n)cout<<"No\n";
    else{
        sum/=k;
        bool ans=true;

        ll sum1=0;
        for(int i=0; i<n; i++)
        {
            sum1+=a[i];
            sum2-=a[i];

           if(sum1>sum){
            ans=false;
            break;
           } 
           if(sum1==sum){
            sum1=0;
            k--;
        }
           //if(sum2==0)break;
        }
        if(ans && k==0)cout<<"Yes\n";
        else cout<<"No\n";

    }



}