#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 

  
  int n;
  cin>>n;
  int tmp=0,sum=0,mx=0;
   for(int i=0; i<n; i++){
      int a;
      cin>>a;
      if(a==0)tmp++;
      else if(tmp==0){}
      else tmp--;
      sum+=a;
      mx=max(mx,tmp);
   }
   if(n==sum)sum--;
   cout<<sum+mx<<endl;

      }

