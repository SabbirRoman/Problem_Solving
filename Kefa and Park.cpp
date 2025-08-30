/**
 *    author:  Roman_Emper0r
 *    created: 10.06.2022      
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int ans=0,m,visited[100100];

void dfs(std::vector<int> v[],int a[], int vertex, int cats){

      
      if(visited[vertex]==1) return;

      visited[vertex]=1;

      if(a[vertex]==1)cats++;
      else cats=0;

      if(cats>m) return;

      int sz=v[vertex].size();
      
      for(int i=0; i<sz; i++){
         int child=v[vertex][i];
       if(visited[child]==0)  dfs(v,a, child, cats);
      }
      if(v[vertex].size()==1&& cats<=m && vertex!=1)ans++;
    
}

int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
   int n;
   cin>>n>>m;
   for(int i=1; i<=n; i++)visited[i]=0;
   int a[n+1];
   for(int i=1; i<=n; i++)cin>>a[i];
   std::vector<int > v[n+1];
   for(int i=1; i<n; i++){
      int a,b;
      cin>>a>>b;
     // if(a>b)swap(a,b);
      v[a].push_back(b);
      v[b].push_back(a);
   }
   int cats=0,vertex=1;
   if(n==2)
   {
      if(m>=(a[1]+a[2]))ans=1;
   }
   else dfs(v,a,vertex,cats);

   cout<<ans<<endl;

}
