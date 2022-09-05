#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
   int t;
   cin>>t;

   std::vector<ll> v;
   v.push_back(0);
   for(int i=1; i<=317; i++)v.push_back(i*i);

   while(t--)
   {
    int n;
    cin>>n;
    int n1=n;
    n--;
    std::vector<ll> ans;
    
    while(n>0)
    {
        
        
  vector<ll>::iterator  upper;
     upper = upper_bound(v.begin(), v.end(), n);
   
    upper--;
        if(*upper==n)
        {
            for(int i=0; i<=n; i++)ans.push_back(i);
                n=0;
        }
        else
        {
            upper++;
            ll tmp= *upper-n;
            for(int i=tmp; i<=n; i++) ans.push_back(i);
            n=tmp-1;
            if(n==0) ans.push_back(0);
        }
        
    }
    
    if(n1==1)cout<<"0";
    else for(int i=n1-1; i>=0; i--)cout<<ans[i]<<" ";
        cout<<endl;


   }

}