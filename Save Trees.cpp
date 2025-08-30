#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
ll solve(ll mini,ll n, std::vector<ll> v){
  ll temp =0,ans=0;

      if(mini>0){
        temp = -mini;
        ans += mini;
      }
       v[0] += temp;
       if(v[0]>0) ans += v[0];
       else{
          ans += (abs(v[0]));
          temp += abs(v[0]);
       }
      // cout<<mini<<"djf "<<temp<<endl;
      for(int i=1; i<n; i++){
        v[i] += temp;
        if(v[i]==0){

        }
        else if(v[i]<0){
          if(i==0){
            ans += abs(v[i]);
            temp += abs(v[i]);
          }
          else{
            ans += (2*abs(v[i]));
            temp += abs(v[i]);
          }
        }
        else{
          ans += v[i];
          temp -= v[i];
        }
      }
      return ans;
}


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  

  ll test;
  cin>>test;
  while(test--)
  {
      ll n;
      cin>>n;
      std::vector<ll> v(n);
      ll mini = INT_MAX;
      for(int i=0; i<n; i++){
        cin>>v[i];
        mini = min(mini,v[i]);
      }
      ll ans = solve(mini,n,v);
      reverse(v.begin(),v.end());
      ans = min(ans,solve(mini,n,v));
      cout<<ans<<endl;

  }

}

