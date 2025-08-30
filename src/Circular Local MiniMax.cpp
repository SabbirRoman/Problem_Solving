/**
 *    author:  Roman_Emper0r
 *    created: 25.05.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    int t;
    cin>>t;
    while(t--)
    {
    	ll n;
        cin>>n;
        ll a[n+5];
        for(int i=0; i<n; i++)cin>>a[i];
         sort(a,a+n);
     std::vector<ll> v;
     if(n%2)cout<<"NO\n";
     else{
        int tmp=n/2;
        for(int i=0; i<tmp; i++){
            v.push_back(a[i]);
            v.push_back(a[i+tmp]);
        }
        int ans=1;
       for(int i=0; i<n; i++){
        int tm1,tm2;
        tm1=i-1;
        tm2=i+1;
        if(tm1==-1)tm1=n-1;
        if(tm2==n)tm2=0;
        if((v[i]>v[tm1]&&v[i]>v[tm2])||(v[i]<v[tm1]&&v[i]<v[tm2])){}
            else ans=0;
       }
       if(ans){
        cout<<"YES\n";
        for(auto c: v)cout<<c<<" ";
            cout<<endl;
       }else cout<<"NO\n";
     }
	}
}