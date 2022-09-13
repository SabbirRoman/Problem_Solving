/**
 *    author:  Roman_Emper0r
 *    created: 12.09.2022
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
    
    int n;
    cin>>n;

    ll a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    ll tmp;
std::vector<ll> v;
    for(int i=0; i<n; i++)
    {
        cin>>tmp;
        v.push_back(tmp-a[i]);
    }

    sort(v.begin(), v.end());

    int i=0,j=v.size()-1,ans=0;

    while(i<j)
    {
        if(v[i]+v[j]>=0)
        {
            ans++;
            j--;
        }
        i++;
    }
    cout<<ans<<endl;

  
   


   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


