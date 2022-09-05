
/**
 *    author:  Roman_Emper0r
 *    created: 08.04.2022     
**/
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
   int start=1,size;
   
   queue<int>q;
   
   q.push(start);
   
   visited[start]=1;
   
 while(q.size()>0){
   int tmp=q.front();
      q.pop();
      size=adj[tmp].size();
    for(int i=0; i<size;i++){
     
      int num=adj[tmp][i];
           if(visited[num]==0){
           visited[num]=1;
           q.push(num);
        }
      }
   }
    vector<int>answer;
      for(int k=1; k<=vertex; k++)
      {
        if(visited[k]==0)
        {
          answer.push_back(k);
          q.push(k);
          visited[k]=1;
           while(q.size()>0)
           {
   int tmp=q.front();
      q.pop();
      size=adj[tmp].size();
    for(int i=0; i<size;i++){
     
      int num=adj[tmp][i];
     
        if(visited[num]==0){
           visited[num]=1;
           q.push(num);
        }
        
        }  
       }
        }
      }
      if(answer.size()){
        cout<<answer.size()<<endl;
        for(int i=0; i<answer.size(); i++)cout<<"1 "<<answer[i]<<endl;
      }else cout<<"0\n";
}

