
/**
 *    author:  Roman_Emper0r
 *    created: 24.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
 
    #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  int n,target;
  cin>>n>>target;
  int a[n+5],count[target+5];
  for(int i=0; i<n; i++)cin>>a[i];
    for(int i=1; i<=target; i++)count[i]=1e6+1;
      count[0]=0;
    for(int i=0; i<n; i++)
    {
      for(int j=0; j<=target; j++)
      {
        if((a[i]+j)<=target)count[j+a[i]]=min(count[j+a[i]],(count[j]+1));
      }
    }
    if(count[target]==1e6+1)count[target]=-1;
    cout<<count[target]<<endl;
  }
