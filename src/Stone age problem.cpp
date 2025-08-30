/**
 *    author:  Roman_Emper0r
 *    created: 09.08.2022      
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

    int n,q;
    cin>>n>>q;

    ll a[n+1],sum=0;
    for(int i=1; i<=n; i++)
      {
        cin>>a[i];
        sum+=a[i];

      }

      int p=0,op2_value=0;
      set<ll>s;
      while(q--)
      {
        ll tm;
        cin>>tm;
        if(tm==1 && p==0)
        {
          ll tmp;
          cin>>tm>>tmp;
          sum= sum-a[tm]+tmp;
          cout<<sum<<endl;
          a[tm]=tmp;
        }
        else if(tm==1 && p)
        {
          ll tmp;
          cin>>tm>>tmp;
          auto pos = s.find(tm);
          if(pos!= s.end())
          {
            sum= sum-a[tm]+tmp;
            cout<<sum<<endl;
          }
          else
          {
            sum= sum-op2_value+tmp;
            cout<<sum<<endl;
          }
          a[tm]=tmp;
          s.insert(tm);
        }
        else if(tm==2)
        {
          s.clear();
          ll tmp;
          cin>>tmp;
          sum= n*tmp;

          cout<<sum<<endl;

          op2_value=tmp;
          p=1;
        }


      }
 
}