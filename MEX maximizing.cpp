/**
 *    author:  Roman_Emper0r
 *    created: 12.06.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long




int main() {
	 #ifndef ONLINE_JUDGE
   /*freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);*/
#endif
    ll q,x;
    cin>>q>>x;
    ll tmp;

    ll a[x]={0};

    set<int>s;

    for(int i=0; i<q+10; i++)s.insert(i);

    while(q--)
    {


      cin>>tmp;
      tmp%=x;
     // cout<<tmp<<endl;
      if(a[tmp]==0)a[tmp]=tmp+x;
      else{
        a[a[tmp]]=1;
        a[tmp]+=x;

      }

    // cout<<a[tmp]-x<<endl;
      tmp=a[tmp]-x;
      s.erase(s.find(tmp));

      for(auto it =s.begin(); it!=s.end(); it++)
      {
        cout<<*it<<endl;
        break;

      }


    }

}
