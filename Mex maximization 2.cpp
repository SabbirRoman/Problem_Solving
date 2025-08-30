/**
 *    author:  Roman_Emper0r
 *    created: 15.07.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long




int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
 //  freopen("output.txt","w",stdout);
#endif
    ll q,x;
    cin>>q>>x;
    ll tmp1=1000000;

    ll a[tmp1]={0};
    ll mex=0;

    for(int i=0; i<q; i++)
    {

        ll tmp;
      cin>>tmp;
      tmp%=x;

      if(a[tmp]==0)a[tmp]=tmp+x;
      else{
       if(a[tmp]<tmp1) a[a[tmp]]=1;
        a[tmp]+=x;

      }

       while(a[mex])
         {


            mex++;


         }
      cout<<mex<<endl;

    }

}
