/**
 *    author:  Roman_Emper0r
 *    created: 01.06.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long


int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int n;
  cin>>n;
  ll a[n],sum=0;
  for(int i=0; i<n; i++){
    cin>>a[i];
    sum+=a[i];
  }
  sort(a,a+n);

  ll ans=0;

  if(n%2){
    sum=a[n/2];
    for(int i=0; i<n; i++)ans+=abs(sum-a[i]);
      cout<<ans<<endl;
  }else{

    sum=a[n/2];
     for(int i=0; i<n; i++)ans+=abs(sum-a[i]);
      sum=a[(n-1)/2];
    ll ans2=0;
    for(int i=0; i<n; i++)ans2+=abs(sum-a[i]);
      cout<<min(ans,ans2)<<endl;
  
  }
  
 
  

  

}
