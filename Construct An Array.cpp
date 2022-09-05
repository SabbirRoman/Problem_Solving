/**
 *    author:  Roman_Emper0r
 *    created: 10.06.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long

long long lcm(ll a, ll b)
{
    return (a /__gcd(a, b)) * b;
}


int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
   int t=1;
   cin>>t;
   while(t--){
  	 ll n;
    cin>>n;
    ll tmp=(n/2)+1,last_num=1;

    for(int i=tmp; i<=n; i++){
      last_num=lcm(last_num,i);
      cout<<last_num<<endl;
   }
      //cout<<1e18-last_num<<endl;

      cout<<last_num<<endl;

    

     
     
}
}
