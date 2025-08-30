/**
 *    author:  Roman_Emper0r
 *    created: 06.06.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
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


 std::vector<ll> v;
 set<ll>s;
 for(int i=1; i<=n; i++){

  ll tmp;
  cin>>tmp;
  v.push_back(tmp);
  s.insert(tmp);
 }


 ll cnt=0,len=s.size();

 while(len){
  cnt++;
  for(int i=n-1; i>=0; i--){
    if(v[i]!=-1)break;
    n--;
  }

  auto it =s.begin();

  ll tmp=v[n-1],tmp2=*it;

  for(int i=n-1; i>=0; i--){
      if(tmp2==v[i]){

      s.erase(s.find(v[i]));
      v[i]=-1;
      break;
    }
    if(tmp>=v[i] && v[i]!=-1){
      tmp=v[i];
      s.erase(s.find(v[i]));
      v[i]=-1;
    }
  }
  len=s.size();
 }
 cout<<cnt<<endl;


}
