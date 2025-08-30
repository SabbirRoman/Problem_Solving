
/**
 *    author:  Roman_Emper0r
 *    created: 20.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
  

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  int n;
  cin>>n;
  int a[n+5];
  for(int i=0; i<n; i++)cin>>a[i];
  
    set<int>s;
    s.insert(0);
   

    for(int i=0; i<n; i++)
    {
        std::vector<int> v;
    for( auto itr : s)
    {
      int tmp=itr+a[i];
      v.push_back(tmp);
     // s.insert(tmp);
      
    }
    for(auto x: v)s.insert(x);
    }
    cout<<s.size()-1<<endl;
    for(auto it: s)if(it!=0)cout<<it<<" ";
}

