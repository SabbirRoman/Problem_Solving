/**
 *    author:  Roman_Emper0r
 *    created: 31.05.2022      
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
    


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int t;
   cin>>t;
   while(t--){
  	
    ll n,k;
    cin>>n>>k;

    std::vector<ll> v2;
    
    v2.push_back(0);

    ll a[1010];
    for(int i=1; i<=1000; i++) a[i]=0;

    for(int i=1; i<=n; i++)
    {
      ll tmp;
      cin>>tmp;
      v2.push_back(tmp);
      
    }

   set<ll>s;
    int even=0,odd=0,sum=0;

for(int i=1; i<=n; i++)
{
  a[v2[i]]++;

  if(v2[i]%2)
  {
    if(even>0)
    {
      ll k1=k;
     set<ll>::reverse_iterator rit;
  
    
    
    for (rit = s.rbegin(); rit != s.rend(); rit++)
      {
        ll tmp = *rit;
        if(k1>0) sum+=(min(k1,a[tmp]))*tmp;

        k1-=min(k1,a[tmp]);
        a[tmp]=0;
        
      }
    s.clear();
    }
    odd++;
    even=0;
    
  }
  else 
  {
    if(odd>0)
    {
       ll k1=k;
      set<ll>::reverse_iterator rit;
  
    
    
    for (rit = s.rbegin(); rit != s.rend(); rit++)
      {
        ll tmp = *rit;
        if(k1>0) sum+=(min(k1,a[tmp]))*tmp;

        k1-=min(k1,a[tmp]);
        a[tmp]=0;
        
      }
    s.clear();

    }
    odd=0;
    even++;
  }

  s.insert(v2[i]);
}
    ll k1=k;
     set<ll>::reverse_iterator rit;
  
    
    
    for (rit = s.rbegin(); rit != s.rend(); rit++)
      {
        ll tmp = *rit;
        if(k1>0) sum+=(min(k1,a[tmp]))*tmp;

        k1-=min(k1,a[tmp]);
        a[tmp]=0;
      }
    s.clear();
    cout<<sum<<endl;

   }
}