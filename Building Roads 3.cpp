
/**
 *    author:  Roman_Emper0r
 *    created: 10.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void dfs(int start, vector<int>adj[], int visited[])
{
  //if(s.empty())return;
  visited[start]=1;
  for(int i=0; i<adj[start].size(); i++)
  {
    if(visited[adj[start][i]]==0){

     // s.push(adj[start][i]);
      int start1=adj[start][i];
      //cout<<start1<<endl;
      dfs(start1,adj,visited);

    }
  }
 // s.pop();
}

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
   int vertex;

  
   cin>>vertex;
    int visited[vertex+6];
    for(int i=0; i<=vertex+4; i++)visited[i]=0;
   vector<int> adj[vertex+5];
   int edges;
   cin>>edges;
   for(int i=0; i<edges; i++)
   {
      int tm1,tm2;
      cin>>tm1>>tm2;
      adj[tm1].push_back(tm2);
      adj[tm2].push_back(tm1);
   }
  stack<int>s;
  int start=1;
 // cin>>start;
  s.push(start);
  dfs(start,adj,visited);
 // for(int i=1; i<=vertex; i++)cout<<visited[i]<<" "; cout<<endl;

  vector<int>ans;
  for(int i=1; i<=vertex; i++)
  {
    if(visited[i]==0)
    {
      ans.push_back(i);
      
      dfs(i,adj,visited);
    }
  }
  cout<<ans.size()<<endl;
  if(ans.size()){
    
    for(int i=0; i<ans.size(); i++)cout<<"1 "<<ans[i]<<endl;
  }

}

