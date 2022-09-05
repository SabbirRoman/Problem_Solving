#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<int>v;


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
 int n;
 cin>>n;
 int a[n+5];
 for(int i=1; i<=n; i++)cin>>a[i];
  int left=0,right=0,cnt=0;
  for(int i=1; i<=n; i++)
  {
    if(i==a[i])
        continue;
    else
    {
      for(int j=i; j<=n; j++)
      {
        if(a[j]==i)
          {
            right=j;
            break;
          }
      }
      left=i;
      cnt++;
       
    while(left<=right){
      swap(a[left],a[right]);
      left++;
      right--;
    }
    right=0;
    }
   
  }
  cout<<cnt<<endl;
}

