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
       std::vector<ll> v,sum;
       ll sum1=0;
       for(int i=0; i<n; i++)
       {
        ll tmp;
        cin>>tmp;
        v.push_back(tmp);
        
        
       }

       for(int i=n-1; i>=0; i--)
       {
        sum1+=v[i];
        sum.push_back(sum1);
        
       }
       sum1=0;
       ll ans=0;
       for(ll i=0; i<n; i++)
       {
        sum1+=v[i];

        auto it = lower_bound(sum.begin(), sum.end(),sum1);
       // cout<<sum1<<" "<< *it<<endl;
        ll tmp= it-sum.begin();
         //cout<<i<<" "<<tmp<<endl;

        if(sum1== *it)
        {
            if(tmp+i+2>n) break;
            ans=max(ans,i+tmp+2);
        }
       }

       cout<<ans<<endl;
    
    
   

   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


