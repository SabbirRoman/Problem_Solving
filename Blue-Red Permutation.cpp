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
  ll a[n+5];
  for(int i=0; i<n; i++)cin>>a[i];
    string s;
  cin>>s;
  std::vector<ll> blue,red;

  for(int i=0; i<n; i++){
    if(s[i]=='R')red.push_back(a[i]);
    else blue.push_back(a[i]);
  }
  sort(red.begin(), red.end());
  sort(blue.begin(), blue.end());
  bool ans=true;
  int tmp=n;
  for(int i=red.size()-1; i>=0; i--){
    if(red[i]>tmp)ans=false;
    tmp--;
  }
  tmp=1;
  for(int i=0; i<blue.size(); i++){
    if(blue[i]<tmp)ans=false;
    tmp++;
  }
  if(ans)cout<<"YES\n";
  else cout<<"NO\n";

}
  
 
}

