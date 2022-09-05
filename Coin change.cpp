
/**
 *    author:  Roman_Emper0r
 *    created: 11.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
  void test(int n)
  { 
    if(n==0) return;
    int a[n];
    for(int i=n-1; i>=0;i--){
      a[i]=i;
      //test(i);
    }
    n--;
    test(n);
      for(auto x : a)cout<<x<<" ";
        cout<<endl;
    
  }

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  int n;
  cin>>n;
  int a[n+5];
  for(int i=0; i<n; i++)cin>>a[i];
    int target;
  cin>>target;
  int combination[target+5];
  for(int i=0; i<=target; i++)combination[i]=0;
    combination[0]=1;

  priority_queue<int,vector<int>,greater<int>> pq;
  //pq.push(0);
  for(int j=0; j<n; j++){
  for(int i=target; i>=0; i--)
  {
    if(combination[i])combination[i+a[j]]=1;
  }
  }
  for(int i=target; i>=0; i--)
  {
    if(combination[i])
    {
      cout<<i<<endl;
      break;
    }
  }
}

