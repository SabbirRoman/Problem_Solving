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
      int n,k;
      cin>>n>>k;

      std::vector<ll> pos,neg;
      ll mx=0;
      for(int i=0; i<n; i++)
      {
        ll tmp;
        cin>>tmp;
        if(tmp>0)pos.push_back(tmp);
        if(tmp<0)neg.push_back(abs(tmp));
        mx=max(mx,abs(tmp));
      }

      sort(pos.begin(), pos.end());
      sort(neg.begin(), neg.end());
      int p=pos.size()-1, q=neg.size()-1;
      ll ans=0;
      for(int i=q; i>=0; )
        {
            ans+=(neg[i]*2);
            i-=k;
            if(i<0)break;
        }

          for(int i=p; i>=0; )
        {
            
            ans+=(pos[i]*2);
            i-=k;
            if(i<0)break;
        }
      
        //cout<<ans<<" "<<mx<<endl;
       cout<<ans-mx<<endl;
   

   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


