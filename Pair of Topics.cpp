/**
 *    author:  Roman_Emper0r
 *    created: 20.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif


   int t=1;
   //cin>>t;
   int test=t;
   while(t--) 
   {
    
    int n;
    cin>>n;
    
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        /* code */
    }
    std::vector<ll> v;
    for(int i=0; i<n; i++)
    {
        ll tmp;
        cin>>tmp;
        v.push_back((a[i]-tmp));

    }
    sort(v.begin(), v.end());
   
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        ll tmp;
        if(v[i]<=0){
         tmp=1+abs(v[i]);
        auto it= lower_bound(v.begin(), v.end(),tmp);
        tmp=n-(it-v.begin());
        }
        else tmp=n-(i+1);
        ans+=tmp;
    }
    cout<<ans<<endl;
   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


