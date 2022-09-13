/**
 *    author:  Roman_Emper0r
 *    created: 10.09.2022
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
        ll n,k;
        cin>>n>>k;

        ll a[n],b[n];
        for(int i=0; i<n; i++)cin>>a[i];

        bool ans=true;

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(a[i]!=b[i]) ans=false;
        }

        if(ans)
        {
             if(k%2!=0 && n==2) ans=false;
            else ans=true;
            if(k==1) ans=false;
        }
        else if(k==0) ans=false;
        else if(n==2)
        {
            if(k%2==0) ans=false;
            else ans=true;
        }
        else
        {
            ans=true;
            int first_in;
            for(int i=0; i<n; i++)
            {
                if(b[0]==a[i])
                {
                    first_in=i;
                    break;
                }
            }
           

             for(int i=0; i<n; i++)
            {
                if(first_in==n) first_in=0;

                if(a[first_in]!=b[i]) ans=false;
                first_in++;
            }


        }

        if(ans) cout<<"Case #"<<test-t<<": YES"<<endl;
        else cout<<"Case #"<<test-t<<": NO"<<endl;
    }

}


