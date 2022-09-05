#include<bits/stdc++.h>
#define ll long long
using namespace std;
int nodes;
vector<int>answer;
queue<int>q;
vector<int>indegree(100,0);
void topo_sort(vector<int>adj[],int start)
{
  answer.push_back(start);
 // cout<<adj[start].size()<<endl;
  if(answer.size()==nodes)return;
  for(int i=0; i<adj[start].size(); i++)
  {
    int tmp=adj[start][i];
    //cout<<tmp<<" "<<indegree[tmp]<<endl;
    indegree[tmp]--;
   // cout<<tmp<<" "<<indegree[tmp]<<endl;
    if(indegree[tmp]==0)topo_sort(adj,tmp);
  }

}
int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
int edges;
cin>>nodes>>edges;
std::vector<int > adj[nodes+3];

for(int i=0 ; i<edges; i++)
{
  int u,v;
  cin>>u>>v;
  adj[u].push_back(v);
  indegree[v]++;

}
int start;
for(int i=1; i<=nodes; i++)if(indegree[i]==0){
 q.push(i);
}

while(q.size()!=0){
start=q.front();
q.pop();

topo_sort(adj,start);

 }
if(answer.size()==nodes)
for(int i=0; i<answer.size(); i++)cout<<answer[i]<<" ";
  else cout<<"Impossible\n";



  
}

