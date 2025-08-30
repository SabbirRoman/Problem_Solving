/**
 *    author:  Roman_Emper0r
 *    created: 03.06.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
typedef pair<int, int> pairs;


int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  int n;
  cin>>n;


 std::vector<pair<ll,ll>> v;
 for(int i=1; i<=n; i++){
 
  ll tmp;
  cin>>tmp;
  v.push_back(make_pair(tmp,i));
 }
 sort(v.begin(), v.end());

 ll tmp=v.size(),cnt=1;

  for(int i=1; i<tmp;i++){
    if(v[i].second<v[i-1].second)cnt++;
  }
    cout<<cnt<<endl;
  


}
