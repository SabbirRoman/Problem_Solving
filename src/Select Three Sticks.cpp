/**
 *    author:  Roman_Emper0r
 *    created: 23.09.2022
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
   int test=t;
   while(t--) 
   {
        int n; 
        cin>>n;

        ll a[n];

        for(int i=0; i<n; i++)cin>>a[i]; 

        sort(a,a+n);
        ll ans=1e10;

        for(int j=1; j<n-1; j++)
        {
            
               ans=min(ans,(abs(a[j]-a[j-1])+abs(a[j]-a[j+1])));
                
               ans=min(ans,(abs(a[j]-a[j-1])+abs(a[j-1]-a[j+1])));
               

               ans=min(ans,(abs(a[j+1]-a[j-1])+abs(a[j]-a[j+1])));
            
        }
        cout<<ans<<endl;
    
    
   

   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


