
/**
 *    author:  Roman_Emper0r
 *    created: 15.05.2022     
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
  std::vector<int> coins;
   for(int i=0; i<n; i++)
   {
    int tmp;
    cin>>tmp;
    coins.push_back(tmp);
   }
   ll count[target+1],m = 1000000007;
   for(int i=1; i<=target; i++)count[i]=0;
   count[0]=1;
    
   for(int x=1; x<=target; x++)
   {
    for(auto c: coins)
    {
      if(x-c>=0){
        count[x]+=count[x-c];
        count[x]%=m;
      }
    }
   }
   cout<<count[target]<<endl;
 //  for(int i=0; i<=target; i++)cout<<i<<" "<<count[i]<<endl;
  }
