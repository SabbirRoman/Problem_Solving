/**
 *    author:  Roman_Emper0r
 *    created: 08.06.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long
ll ans=0;
/*void func(ll a[], ll k, ll n, ll res){
  if(n==0 || k==0) return ;

  for(int i=29; i>0; i--){
    // cout<<i<<" "<<res<<" "<<k<<" "<<n<<endl;
    ll tmp=k;
    ll k1=k,n1=n;
   if(a[i]>tmp){

   }
   else{
    
    ll p=(k/a[i]);
    p=min(n,p);
    n1-=p;
    k1-=(a[i]*p);
    p*=i;
    res+=p;
    ans=max(ans,res);
    if(n>0&&k>0)func(a,k1,n1,res);
   }
  }
  
  return;

}*/


int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    
    if(n>=k)cout<<k<<endl;
    else{
      ll a[35],cnt=0,tmp=1;
     
      while(tmp<=1e9){
        a[cnt++]=tmp-1;
        tmp*=2;
      }
      ll ans=0;
      for(int i=29; i>0; i--){
          tmp=k;
          ll res=0,k1=k,n1=n;
   if(a[i]>tmp){

   }
   else{
    ll p=(k/a[i]);
    //if(i!=1)
     p=min(n,p);
    //else p=min(n-1,p);
    n1-=p;
    k1-=(a[i]*p);
    p*=i;
    res+=p;

    ans=max(ans,res);
    if(n>0&&k>0)func(a,k1,n1,res);
   }
        
      }
      cout<<ans<<endl;

    }
  }
}
