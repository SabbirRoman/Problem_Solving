#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int t;
   cin>>t;
   while(t--)
   {
      int n,x; 
      cin>>n>>x;
      ll a[n+5];
      ll ans=0,tmp=0,tmp2=0;
      int range=0,r=0;
      a[0]=0;
      for(int i=1; i<=n; i++)
      {
         cin>>a[i];
         a[i]+=tmp;
         tmp=a[i];
         r++; 
      }
    //  cout<<ans<<" ";
      std::vector<pair<int,int>> v;
      for(int i=1; i<=n; i++)
      {
         tmp=0;
         ll sum=-1e9;
         for(int j=i; j<=n; j++)
         {
            ll p=a[j]-a[tmp];
            sum=max(sum,p);
            tmp++;
         }
         v.push_back(make_pair(sum,i));
         
      }
     
      for(int j=0; j<=n; j++)
      {
         ans=0;
         tmp=0;
      for(int i=v.size()-1; i>=0; i--)
      {
          tmp=v[i].first+(x*min(j,v[i].second));
         //if(tmp<ans)break;
         ans=max(ans,tmp);
      }
      cout<<ans<<" ";
      }
      cout<<"\n";
   }

  
  
}

