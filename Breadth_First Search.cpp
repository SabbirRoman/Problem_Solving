#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
   int vertex;
   cin>>vertex;
   vector<int> adj[vertex+1];
   int edges;
   cin>>edges;
   for(int i=0; i<edges; i++)
   {
      int tm1,tm2;
      cin>>tm1>>tm2;
      adj[tm1].push_back(tm2);
     // adj[tm2].push_back(tm1);
   }
   int start=0,end=vertex-1;
   
   queue<int>q;
   
   q.push(start);
   int origin[vertex+5];
   int visited[vertex+5]={0};
   visited[start]=1;
   
 while(q.size()>0){
   int tmp=q.front();
      q.pop();
      
    for(int i=0; i<adj[tmp].size();i++){
     
      int num=adj[tmp][i];
    //  
       if(visited[num]==0) {
         cout<<tmp<<" :"<<num<<endl;
         q.push(num);
         origin[num]=tmp;
         visited[num]=1;
      } 
      
      
      }
   }
      vector<int>path;
      int tm=end;
      path.push_back(tm);
      while(start!=tm)
      {
         
         tm=origin[tm];
       
         path.push_back(tm);
        /* if(tm==0){
            tm=-1;
            break;
         }*/
      }
      if(tm==-1)cout<<tm;
      else for(int i=path.size()-1; i>=0; i--)cout<<path[i]<<" ";
      cout<<endl;


}

