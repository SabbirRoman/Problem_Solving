/**
 *    author:  Roman_Emper0r
 *    created: 12.07.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




int main() 
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int t;
  cin>>t;
 
  while(t--)
  {
    int n;
    cin>>n; 
    int a[n][n];

    for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)cin>>a[i][j];
    }
  int p=n-1,q=0;
    while(p>0)
    {
      int row=q,col=q,z=3;
      for(int i=q; i<q+p; i++)
      {
        int cnt=0;
        if(a[row][col]==1)cnt++;
        while(z--)
        {
          row=col;

          if(z==2){
            col+=p;
          }else if(z==1){
            col
          }
        }
      }
      p-=2;
      q++;
    }
  }
}


