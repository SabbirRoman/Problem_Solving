#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<int>v;


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
  int t;
  cin>>t;
  while(t--)
  {
   
  int n,m,rb,cb,rd,cd;
  cin>>n>>m>>rb>>cb>>rd>>cd;
  int tmp1=1,tmp2=1,cnt=0;
  if(rb==n)tmp1=tmp1*(-1);
   if(cb==m )tmp2=tmp2*(-1);
  while(1){
   if(rb==rd || cb==cd){
      cout<<cnt<<endl;
      break;
   }
   
   cnt++;
   rb+=tmp1;
   cb+=tmp2;
   if(rb==n || rb==1)tmp1=tmp1*(-1);
   if(cb==m || cb==1)tmp2=tmp2*(-1);
   
  }



    }
}

