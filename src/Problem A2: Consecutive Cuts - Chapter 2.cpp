/**
 *    author:  Roman_Emper0r
 *    created: 11.09.2022
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
        ll mx=-1,mn=10e9;
        std::vector<int> index;

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(a[i]!=b[i]) ans=false;

            mx=max(mx,b[i]);
            mn=min(mn,b[i]);
            if(a[0]==b[i]) index.push_back(i);
        }

        if(mx==mn) ans=true;
        else if(ans)
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
            
            

           for(int j=0; j<index.size(); j++)
           {
            ans=true;
            int first_in=index[j];
             for(int i=0; i<n; i++)
            {
                if(first_in==n) first_in=0;

                if(b[first_in]!=a[i]) ans=false;
                if(ans==false) break;
                first_in++;
            }
            if(ans) break;

        }


        }

        if(ans) cout<<"Case #"<<test-t<<": YES"<<endl;
        else cout<<"Case #"<<test-t<<": NO"<<endl;
    }

}


