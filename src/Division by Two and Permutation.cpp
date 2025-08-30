/**
 *    author:  Roman_Emper0r
 *    created: 25.08.2022
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

  int t;
  cin>>t;

  while(t--)
  {
   int n; 
   cin>>n;

  multiset<int>s;

   for(int i=1; i<=n; i++)
   {
    ll tmp;
    cin>>tmp;
    while(tmp>n)
    {
        tmp/=2;
    }
    s.insert(tmp);
   }

   bool ans=true;

   for(int i=n; i>0; i--)
   {
    if(s.count(i))
    {
        s.erase(s.find(i));
    }
    else
    {
        multiset<int>::reverse_iterator rit;
        for (rit = s.rbegin(); rit != s.rend(); rit++)
        {
            int tmp= *rit;

            while(tmp>0)
            {
                if(tmp==i)
                {
                    s.erase(s.find(*rit));
                    break;
                }
                tmp/=2;
            }
            if(tmp>0)break;
        }
    }
   }
  
    
   if(s.size()>0) ans=false;


   if(ans)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  }
 

  
  }


