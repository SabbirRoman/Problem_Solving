/**
 *    author:  Roman_Emper0r
 *    created: 26.06.2022      
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
    
  ll a[3];
  for(int i=0; i<3; i++)cin>>a[i];
    sort(a,a+3);
  if(a[0]+a[1]<a[2])cout<<"-1\n";
  else cout<<a[2]<<endl;
   }


