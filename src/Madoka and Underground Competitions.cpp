/**
 *    author:  Roman_Emper0r
 *    created: 02.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
      #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif


   int t;
   cin>>t;
   while(t--)
   {
   int n,k,r,c,cnt=0;;
   cin>>n>>k>>r>>c;

   char a[n+1][n+1];
   a[r][c]='X';
   for(int i=1; i<=n; i++)
   {
    a[i][i]='X';
   
   }

   // for(int i=1; i<=n; i++)
   // {
   //  cnt=0;
   //  for(int j=1; j<=n; j++)
   //  {
   //      cnt++;
   //      if(i==r) break;
   //      if(j==c)
   //      {

   //      }
   //      else if(cnt>=k)
   //      {
   //          a[i][j]='X';
   //          cnt=0;
   //      }
   //      else a[i][j]='.';
        
   //  }
   // }
   a[r][c]='X';
   cnt=0;
   for(int i=r-1; i>0; i--)
   {
    cnt++;
    if(cnt==k)
    {
        a[i][c]='X';
        cnt=0;
    }
    else a[i][c]='.';
   }

   cnt=0;
   for(int i=r+1; i<=n; i++)
   {
    cnt++;
    if(cnt==k)
    {
        a[i][c]='X';
        cnt=0;
    }
    else a[i][c]='.';
   }

   cnt=0;
   for(int i=c-1; i>0; i--)
   {
    cnt++;
    if(cnt==k)
    {
        a[r][i]='X';
        cnt=0;
    }
    else a[r][i]='.';
   }

   cnt=0;
   for(int i=c+1; i<=n; i++)
   {
    cnt++;
    if(cnt==k)
    {
        a[r][i]='X';
        cnt=0;
    }
    else a[r][i]='.';
   }



   for(int i=1; i<=n; i++)
   {
    for(int j=1; j<=n; j++)
    {
       cout<<a[i][j];
    }
    cout<<endl;
   }
   }

}


