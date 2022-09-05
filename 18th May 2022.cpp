/**
 *    author:  Roman_Emper0r
 *    created: 18.05.2022      
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
    
    ll cnt=1;
    while(cnt<n)
    {
        cnt*=2;
    }
    
    ll cnt1=cnt;
    cnt*=2;
   ll  m=0;
    for(ll i=0; i<n; i++){
        m=m^i;
        cout<<m<<" ";
       // cout<<i<<" ";
    }
    cout<<endl;
    m=cnt1;
    for(ll i=cnt1; i<cnt1+n; i++){
        m=m^i;
        cout<<m<<" ";
        //cout<<i<<" ";
    }
        cout<<endl;

 }  
}