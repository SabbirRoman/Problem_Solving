#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
int t;
cin>>t;
while(t--)
{
  int n;
  cin>>n;
  std::vector<pair<int,int>> v;
  vector<int>adj[n+5];
  
  for(int i=0; i<n-1; i++)
  {
    int a,b;
    cin>>a>>b;
  
    v.push_back(make_pair(a,b));
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int tmp=1;
  for(int i=1; i<=n; i++)
  {
    if(adj[i].size()>=3){
     // cout<<i<<endl;
      tmp=0;
      break;
    }
     if(adj[i].size()==2){
       adj[i].push_back(0);
    adj[i].push_back(0);
     
    }
    if(adj[i].size()==1){
      tmp=i;
       adj[i].push_back(0);
    adj[i].push_back(0);
    adj[i].push_back(0);
     
    }
  }
  //cout<<tmp<<endl;
  if(tmp==0){
    cout<<"-1\n";
  }else{
  int assign=2,tmp2=-1;
  for(int i=0; i<n-1; i++){
   
    for(int j=0; j<2; j++){
      if(adj[tmp][j]!=tmp2){
        adj[tmp][j+2]=assign;
        tmp2=adj[tmp][j];
        swap(tmp,tmp2);
        break;
      }
    }
    for(int j=0; j<2; j++){
      if(adj[tmp][j]==tmp2){
        adj[tmp][j+2]=assign;
        tmp2=adj[tmp][j];
        break;
      }
    }


    if(assign==2)assign=3;
    else assign=2;
  }
  /*
  for(int i=1; i<=n; i++)
  {
    cout<<"\n"<<i<<"  :: ";
    for(int j=0; j<adj[i].size(); j++){
      cout<<adj[i][j]<<" ";
    }
  }
*/


  for(int i=0; i<n-1; i++)
  {
    tmp=v[i].first;
    tmp2=v[i].second;
    for(int j=0; j<adj[tmp].size(); j++){
      if(adj[tmp][j]==tmp2){
        cout<<adj[tmp][j+2]<<"\n";
        break;
      }
    }
  }

}
}
  
 
}

