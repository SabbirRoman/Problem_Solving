/*
    author: Roman_Emper0r
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll result;
int destination;
void dfs(int source,vector<vector<pair<int,int>>> &adj, ll distance, vector<int> &visited ){
    if(visited[source]) return;
    if(source==destination){
        result = min(result, distance);
        return;
    }
    if(visited[source]) return;

    visited[source] = true;
    for(int i=0; i<adj[source].size(); i++){
        int tmp = adj[source][i].first, len = adj[source][i].second;
        // cout<<tmp<<" "<<len<<endl;
        dfs(tmp,adj,len+distance,visited);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

       
    int node, edge, q;
    cin>>node>>edge>>q;
    vector<vector<pair<int,int>>> adj(node+1);
    for(int i=0; i<edge; i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }
    

    for(int i=0; i<q; i++){
        int a, b;
        cin>>a>>b;
        destination = b;
        result = 1e18;
        vector<int> visited(node,false);
        ll distance=0;
        dfs(a,adj,distance,visited);
        if(result==1e18) result = -1;
        cout<<result<<endl;
    }

    
    


    return 0;
    
    
}