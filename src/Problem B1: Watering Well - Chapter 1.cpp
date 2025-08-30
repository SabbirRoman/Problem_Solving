/**
 *    author:  Roman_Emper0r
 *    created: 11.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
    


   int t;
   cin>>t;
   int test=t;
   while(t--) 
   {
    ll mod=1000000007,n;
           //110090622

    cin>>n;
     int a[n],b[n],ans1[3001],ans2[3001];
     for(int i=0; i<=3000; i++)
     {
        ans1[i]=0;
        ans2[i]=0;
     }

     for(int i=0; i<n; i++)
     {
        cin>>a[i]>>b[i];
        for(int j=0; j<=3000; j++)
        {
            ans1[j]+=(abs(j-a[i])*abs(j-a[i]));

            if(ans1[j]>=mod) ans1[j]%=mod;

            ans2[j]+=(abs(j-b[i])*abs(j-b[i]));

            if(ans2[j]>=mod) ans2[j]%=mod;
        }
     }

     ll q,ans=0,x,y;
     cin>>q;
     for(int i=0; i<q; i++)
     {
        cin>>x>>y;

        ans+=(ans1[x]+ans2[y]);

        if(ans>=mod) ans%=mod;
        

     }

       

        if(ans) cout<<"Case #"<<test-t<<": "<<ans<<endl;
        else cout<<"Case #"<<test-t<<": "<<ans<<endl;
    }

}


