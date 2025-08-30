/**
 *    author:  Roman_Emper0r
 *    created: 28.07.2022      
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
         #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif
  

  ll n;
  cin>>n;
  std::vector<ll> v;
  ll sum=0,j=1;

  for(int i=0; i<n; i++){
   ll tm;
   cin>>tm;
   if(tm!=0)j=0;
   sum+=tm;
   v.push_back(tm);
  }
   if(sum%3!=0)cout<<"0\n";
   else if(sum==0 && j) cout<<(n-1)*(n-2)/2<<endl;
   else if(sum==0 && j==0)
   {
      ll cnt=0,sum1=0;
      for(int i=0; i<n; i++)
      {
         sum1+=v[i];
         if(sum1==0)cnt++;
      }
      cout<<(cnt-1)*(cnt-2)/2<<endl;
   }
   else
   {
      
    sum/=3;
        ll sum1=0,tmp=0,tmp1=0,p,q;
        for(int i=0;i<n; i++)
        {
            sum1+=v[i];
            if(sum1==sum){
                tmp++;
                p=i;
            }
        }
        sum1=0;
        for(int i=n-1;i>=0; i--)
        {
            sum1+=v[i];
            if(sum1==sum){
                tmp1++;
                q=i;
            }
        }
   
            if(p>=q) p=1;
            else p=0;
            
           if(sum!=0) tmp=(tmp1*tmp)-p;
           p=0;
           cout<<max(p,tmp)<<endl;
          
        






   }
   }

