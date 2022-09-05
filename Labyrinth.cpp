#include<bits/stdc++.h>
#define ll long long
using namespace std;
 int n,m;
  
  queue<int>q;
   int origin[1000010];
   int query[1000010]={0};

void func(int num, int tmp)
{

           if(query[num]==0) {
         q.push(num);
         origin[num]=tmp;
         query[num]=1;
      }
}


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 

 cin>>n>>m;

 string s[n+3];

 for(int i=0; i<n; i++)cin>>s[i];

  
   int start,end;
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<m; j++)
      {  if(s[i][j]=='A')
         start=i*m+j;
         
         else if(s[i][j]=='B') {
            end=i*m+j;
         }
      }
   }
   
   q.push(start);
   query[start]=1;

   while(q.size()>0)
   {
      int tmp=q.front();
      q.pop();
      int i=tmp/n;
      int j=tmp-(i*n);

      if((s[i][j-1]=='.' || s[i][j-1]=='B')&& j!=0){
          int num=(i*m)+j-1;
         func(num,tmp);
      }else if((s[i-1][j]=='.' || s[i-1][j]=='B')&& i!=0){
          int num=((i-1)*m)+j;
         func(num,tmp);
      } else if((s[i][j+1]=='.' || s[i][j+1]=='B')&& j!=m){
          int num=(i*m)+j+1;
         func(num,tmp);
      }else if((s[i+1][j]=='.' || s[i+1][j]=='B')&& i!=n){
          int num=((i+1)*m)+j;
         func(num,tmp);
      }
      
      }

      vector<int>path;
      int tm=end;
      path.push_back(tm);
      while(start!=tm)
      {
         
         tm=origin[tm];
         
         path.push_back(tm);
         if(tm==0){
            tm=-1;
            break;
         }
      }
      if(tm==-1)cout<<tm;
      else for(int i=path.size()-1; i>=0; i--)cout<<path[i]<<" ";
      cout<<endl;

   }

  
  


