#include <bits/stdc++.h>

#define ll long long
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
  
int t;
cin>>t;

while(t--)
{
   ll n,m;
   cin>>n>>m;

   std::vector<ll> v;

   for(int i=0; i<m; i++)
   {
    ll tmp;
    cin>>tmp;
    v.push_back(tmp);
   }

   sort(v.begin(), v.end());

   ll tmp=(v[0]-1)+(n-v[m-1]);

   std::vector<ll> v2;

   if(tmp>0)v2.push_back(tmp);

   for(int i=1; i<m; i++)
   {
    tmp= v[i]-v[i-1]-1;
    if(tmp>0) v2.push_back(tmp);
   }

   sort(v2.begin(), v2.end(), greater <>());
   ll block=0, safe=0;
   for(int i=0; i<v2.size(); i++)
   {
    
    if((block*2)>=v2[i])break;
    else if((block*2)+1==v2[i]){
        safe++;
        block++;
    }
    else
    {
        safe+=(v2[i]-((block*2)+1));
        block+=2;
    }

   }

   cout<<n-safe<<endl;


}
 



}