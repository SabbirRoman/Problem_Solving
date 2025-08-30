/**
 *    author:  Roman_Emper0r
 *    created: 29.06.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long



int main() {
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int t;
  cin>>t;
 
  while(t--)
  {
    int n;
    cin>>n;
    std::vector<int> v;
    int even=0,odd=0;
    for(int i=0; i<(2*n); i++)
    {
      ll tmp;
      cin>>tmp;
      if(tmp%2)odd++;
      else
      {
        even++;
        int tmp2=0;
        while(tmp%2==0)
        {
          tmp2++;
          tmp/=2;
        }
        v.push_back(tmp2);
      }
    }

    if(odd>=even)cout<<n-even<<endl;
    else{
      sort(v.begin(), v.end());

      int ans=0,tmp=n-odd;
      for(int i=0; i<tmp; i++)ans+=v[i];
        cout<<ans<<endl;
    }
    
   }
  }


