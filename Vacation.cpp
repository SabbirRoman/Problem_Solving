
/**
 *    author:  Roman_Emper0r
 *    created: 08.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
int n;
cin>>n;
ll a[n+5][4];
for(int i=1; i<=n; i++)cin>>a[i][1]>>a[i][2]>>a[i][3];
  for(int i=2; i<=n; i++){
    a[i][1]+=max(a[i-1][2],a[i-1][3]);
    a[i][2]+=max(a[i-1][1],a[i-1][3]);
    a[i][3]+=max(a[i-1][2],a[i-1][1]);
  }
  cout<<max(a[n][1],max(a[n][2],a[n][3]))<<endl;
}

