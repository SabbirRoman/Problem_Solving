#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<int>v;


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
 ll r,c,Ci,Cj;
 cin>>r>>c>>Ci>>Cj;
 Ci++;
 Cj++;
 for(int i=1; i<=r; i++)
 {
   for(int j=1; j<=c; j++)
   {
      cout<<max(abs(i-Ci),abs(j-Cj))<<" ";
   }
   cout<<endl;
 }
}

