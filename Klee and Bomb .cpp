#include<bits/stdc++.h>
#define ll long long
using namespace std;
int answer=0;
  
  void check(int tmp,set<int>s,vector<int>adj1[])
  {   
      for(int i=0; i<adj1[tmp].size(); i++)
      {
         int tmp2=adj1[tmp][i];
         if(s.count(tmp2)==0){
            s.insert(tmp2);
            check(tmp2,s,adj1);
         }
      }
      for (auto x : s) {
cout << x << " ";
} cout<<endl;
      if(s.size()>answer)answer=s.size();
  }

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  int n,m;
  cin>>n>>m;
  int c[n+5];
  for(int i=1; i<=n; i++)
  {
   cin>>c[i];
  }
  std::vector<int> adj1[n+1],adj2[n+1];

  for(int i=0; i<m; i++)
  {
   int a,b;
   cin>>a>>b;
   if(c[a]==c[b]){
      adj1[a].push_back(b);
      adj1[b].push_back(a);
   }else{
      adj2[a].push_back(b);
      adj2[b].push_back(a);
   }
  }

for(int i=1; i<=n; i++)
{
   set<int>s;
   s.insert(i);
   for(int j=0; j<adj1[i].size(); j++)s.insert(adj1[i][j]);
      
   int color=c[i];
   for(int j=0 ; j<adj2[i].size(); j++)
   {
      
      int tmp=adj2[i][j];
      s.insert(tmp);
      for(int k=0; k<adj2[tmp].size(); k++)
      {
         if(c[adj2[tmp][k]]==color){
            s.insert(adj2[tmp][k]);
            check(adj2[tmp][k],s,adj1);
         }
      }
      


   }
  
}
cout<<answer<<endl;
  
}

