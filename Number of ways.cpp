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
        ll sum1=0,index1=-1,index2=-1;
        for(int i=0;i<n; i++)
        {
            sum1+=v[i];
            if(sum1==sum){
                index1=i;
                break;
            }
        }
        sum1=0;
        for(int i=n-1;i>=0; i--)
        {
            sum1+=v[i];
            if(sum1==sum){
                index2=i;
                break;
            }
        }
   
        if(index2<0 || index1<0 || index1>=index2)cout<<"0\n";
        else{
            sum1=0;
            ll tmp=1,tmp1=1,p=0;
            for(int i=index1+1; i<index2; i++){
                sum1+=v[i];
                if(sum1==0){
                  tmp++;
                  p=i;
               }
                //if(sum1==sum && sum!=0)break;
            }
            sum1=0;
            for(int i=index2-1; i>p && i>index1; i--){
                sum1+=v[i];
                if(sum1==0)tmp1++;
               // if(sum1==sum && sum!=0)break;
            }
            
           if(sum!=0) cout<<tmp1*tmp<<endl;
          
        }






   }
   }

