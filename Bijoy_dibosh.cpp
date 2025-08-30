/**
 *    author:  Roman_Emper0r
 *    created: 16-12-2023  20:35:00
**/
#include<bits/stdc++.h>

using namespace std;

void solution()
{
  int n,m;
  cin>>n>>m;
  std::vector<long long int> v1,v2;

  for(int i=0; i<n; i++)
  {
    long long int tmp;
    cin>>tmp;
    v1.push_back(tmp);
  }
  for(int i=0; i<m; i++)
  {
    long long int tmp;
    cin>>tmp;
    v2.push_back(tmp);
  }
  if(n<4 || m<4 || (n+m)<11) cout<<-1<<endl;
  else
  {
    sort(v1.begin(),v1.end(),greater<int>());
    sort(v2.begin(), v2.end(), greater<int>());
    long long int sum = 0; 
    for(int i=0; i<4; i++)
    {
        sum += v1[i] + v2[i];
    }
    vector<long long int> v3;
    for(int i=4; i<min(7,n); i++)
    {
        v3.push_back(v1[i]);
    }
    for(int i=4; i<min(7,m); i++)
    {
        v3.push_back(v2[i]);
    }
    sort(v3.begin(),v3.end(),greater<int>());
    for(int i=0; i<3; i++) sum += v3[i];
    
      cout<<sum<<endl;
       

  }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif

 int t=1;
 cin>>t;
 while(t--)
 {
    solution();
 }

}


