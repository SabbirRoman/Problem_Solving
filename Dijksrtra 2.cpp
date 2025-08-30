
/**
 *    author:  Roman_Emper0r
 *    created: 10.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5;
int dist[N];
int visited[N]={0};
vector<pair<int,int>>g[N];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  int vertices,edges;
  cin>>vertices>>edges;

  for(int i=0; i<edges; i++)
  {
    int a,b,c;
    cin>>a>>b>>c;
    g[a].push_back({b,c});
    g[b].push_back({a,c});

  }
 // priority_queue<pair<int,int>,vector<pair<int,int>,greater<pair<int,int>>>pq;
  int source;
  cin>>source;
  
  for(int i=0; i<=vertices; i++)dist[i]=N;
    dist[source]=0;
  pq.push({0,source});
  while(pq.size()>0)
  {
    int s=pq.top().second;
    pq.pop();
   
    for(int i =0; i<g[s].size(); i++)
    {
      int tm1,tm2;
      tm1=g[s][i].first;
      tm2=g[s][i].second;
      if(dist[tm1]==N) pq.push({dist[tm1],tm1});
      dist[tm1]=min(dist[tm1],(dist[s]+tm2));
    //  cout<<s<<" "<<tm1<<" :"<<dist[tm1]<<endl;
      
    }
    visited[s]=1;
  }
  for(int i=0; i<vertices; i++)cout<<i<<" "<<dist[i]<<" "<<endl;
  
}

