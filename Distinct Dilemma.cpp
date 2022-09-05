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
  ll sum=0;
  for(int i=0; i<n; i++)
  {
    ll a;
    cin>>a;
    sum+=a;
  }
  int cnt=0;
  for(int i=1; (i*(i+1))/2<=sum; i++){
    cnt++;
  }
  cout<<cnt<<endl;
}
}

