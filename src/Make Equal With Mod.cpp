/**
 *    author:  Roman_Emper0r
 *    created: 06.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
 

void solve()
{
       
    ll n;
    cin>>n;
    
    bool is_zero=false, is_one=false,is_two=false;
    std::vector<ll> v;
    for(int i=0; i<n; i++)
    {
      ll tmp;
      cin>>tmp;
      v.push_back(tmp);
      if(tmp==0) is_zero=true;
      if(tmp==1)is_one=true;
      if(tmp==2) is_two=true;
    }
    if((is_two&&is_one) or (is_one&&is_zero)) cout<<"No\n";
     else if(is_one)
    {
      sort(v.begin(), v.end());
      bool ans=true;
      for(int i=1; i<n; i++)
      {
        if(v[i]-v[i-1]==1)
        {
          ans=false;
          break;
        }
      }
      if(ans) cout<<"Yes\n";
      else cout<<"No\n";

      
    }
    else cout<<"Yes\n";

        
    
   
}

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif

   int t;
   cin>>t;
   while(t--)
   {
    solve();
   }
}


