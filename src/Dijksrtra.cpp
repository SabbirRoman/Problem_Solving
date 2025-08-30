#include<bits/stdc++.h>
#define ll long long
using namespace std;

typedef pair<int,int>ipair;

priority_queue<ipair,vector<ipair>,greater<ipair>>pq;
int visited[]={0};


int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int nodes,edges;
   cin>>nodes>>edges;
   int distance[nodes+5]={9999};

   list<pair<int,int>> adj[nodes+3];

   for(int i=0; i<edges; i++)
   {
      int a,b,c;
      cin>>a>>b>>c;
      adj[a].push_back(make_pair(b,c));
   }
   int source,p=0;
   cin>>source;
   pq.push(make_pair(p,source));
   distance[source]=0;
   vector<pair<int,int> > v_temp;
  while(pq.size()!=0)
   {
      source=pq.top().second;
      pq.pop();
      if(visited[source]==0){
          list<pair<int,int>> :: iterator i;
         for(int i=adj[source].begin(); i!=adj[source].end(); i++){
            int v=i->first;
            int cost=i->second+distance[source];
            if(distance[v]>(cost))distance[v]=cost;
            pq.push(make_pair(distance[v],v));
         }
      }


      visited[source]=1;

   }
   for(int i=0; i<nodes; i++)cout<<distance[i]<<endl;
  
}

