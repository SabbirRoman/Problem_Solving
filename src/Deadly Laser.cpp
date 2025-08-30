/**
 *    author:  Roman_Emper0r
 *    created: 15.08.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
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
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;

       bool t1=true,t2=true,t3=true,t4=true;

      
       for(int i=1; i<=m; i++) if(abs(1-x)+abs(i-y)<=d){
        t2=false;
        break;
       }
       for(int i=1; i<=n; i++) if(abs(i-x)+abs(m-y)<=d){
        t3=false;
        break;
       }
      
       t2= t3&t2;

        for(int i=1; i<=n; i++) if(abs(i-x)+abs(1-y)<=d){
        t1=false;
        break;
       }
       for(int i=1; i<=m; i++) if(abs(n-x)+abs(i-y)<=d){
        t4=false;
        break;
       }
        
       t1=t1&t4;
        
       if(t1||t2)cout<<n+m-2<<endl;
       else cout<<"-1"<<endl;
    }
  }


