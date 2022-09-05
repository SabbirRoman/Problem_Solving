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
  std::vector<int> v[n+3];
  int a[n+2]={0};
  set<int>s;
  for(int i=1; i<=n; i++){
    ll tmp;
    cin>>tmp;
    while(tmp!=0){
      if(tmp<=n){
        s.insert(tmp);
        v[i].push_back(tmp);
        a[tmp]++;
      }
      tmp/=2;

    }
  }
  vector<int>unique;
  int ans=1;
  for(int i=1; i<=n; i++)if(a[i]==1){
    
    unique.push_back(i);
  }


 if(s.size()!=n)ans=0;
else{ for(int i=1; i<=n; i++){
  set<int>s2; int cnt=0;
  for(int j=0; j<v[i].size(); j++){
    
    s2.insert(v[i][j]);

  }
    for(int k=0; k<unique.size(); k++)if(s2.count(unique[k]))cnt++;
      if(cnt>1){
        ans=0;
        break;
      }
  
  if(ans==0)break;
 }
}
  if(ans)cout<<"YES\n";
  else cout<<"NO\n";
}
}

