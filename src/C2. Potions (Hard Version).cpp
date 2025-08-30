#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
int t=1;

while(t--)
{
  ll n;
  cin>>n;

  ll a,sum1=0,cnt=0;
  std::vector<ll> v;
  for(int i=0; i<n; i++){
    cin>>a;
   if(a>=0){
    sum1+=a;
    cnt++;
   }else if(sum1<abs(a)){}
   else v.push_back(abs(a));

  }
  sort(v.begin(), v.end());
  for(int i=0; i<v.size(); i++){
    sum1-=v[i];
    if(sum1>=0)cnt++;
    else break;
  }
  cout<<cnt<<endl;

 
}
}

