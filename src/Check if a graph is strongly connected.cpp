
/**
 *    author:  Roman_Emper0r
 *    created: 10.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5;
bool visited[N];

void dfs(int vertex, vector<int>g[])
{
    visited[vertex] = true;
    for (auto child : g[vertex])
    {
        //cout<<child<<endl;
        if (visited[child])
            continue;
        dfs(child,g);
    }
}

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  vector<int> g[N];
vector<int>g2[N];

   int vertex;

  
   cin>>vertex;
  for(int i=0; i<=vertex+4; i++)visited[i]=false;
   vector<int> adj[vertex+5];
   int edges;
   cin>>edges;
   for(int i=0; i<edges; i++)
   {
      int tm1,tm2;
      cin>>tm1>>tm2;
      g[tm1].push_back(tm2);
      g2[tm2].push_back(tm1);
   }
 
  int start=1;
 // cin>>start;
  
  dfs(start,g);
  bool ans=true;
 for(int i=1; i<=vertex; i++)if(visited[i]==false){
  ans=false;
  break;
 }
 //cout<<ans<<endl;
 if(ans){
  for(int i=0; i<=vertex+4; i++)visited[i]=false;
  dfs(start,g2);
 for(int i=1; i<=vertex; i++)if(visited[i]==false){
  ans=false;
  break;
 }
 }
 if(ans)cout<<"THE graph is strongly connected\n";
 else cout<<"The graph is not strongly connected\n";
}

