#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll b[1100],c[1100];
ll knapsack(ll n, ll k){
if(k==0 || n==0 ) return 0;

//cout<<k<<" "<<b[n-1]<<" "<<c[n-1]<<endl;
 if(k>=b[n-1]){

    //Take it
    ll p1=c[n-1]+knapsack(n-1,k-b[n-1]);
 
    //Leave it
    ll p2=knapsack(n-1,k);
   
    return max(p1,p2);
  }else{
    //Leave it
    ll p2=knapsack(n-1,k);
    return p2;
  }

}


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 

  
 int t;
 cin>>t;
 while(t--)
 {
  ll n,k,sum=0;
  cin>>n>>k;
  
  for(int i=0; i<n; i++)cin>>b[i];
  for(int i=0; i<n; i++)cin>>c[i];
    for(int i=0; i<n; i++){
      int cnt=0,tmp=1;
      if(b[i]==1){
        sum+=c[i];
        c[i]=0;
      }

      while(tmp<b[i]){
        cnt++;
        tmp*=2;
      }
      b[i]=cnt;
    }
   /*for(int i=0; i<n; i++)cout<<b[i]<<" ";
      cout<<endl;
  for(int i=0; i<n; i++)cout<<c[i]<<" ";
      cout<<endl;*/
     sum+=knapsack(n,k);
    cout<<sum<<endl;
    

 }
  
}

