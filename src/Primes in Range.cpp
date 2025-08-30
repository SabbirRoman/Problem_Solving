/**
 *    author:  Roman_Emper0r
 *    created: 16.08.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




int main() {
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif

std::vector<int> v;
v.push_back(2);
bool a[1000001]={false};
for(int i=3;i<=1000000; i+=2)
{
  if(a[i]==false)
    {
      v.push_back(i);
      for(int j=i+i; j<=1000000; j+=i)a[j]=true;
    }
}
int t;
cin>>t;
while(t--)
{
  ll l,r;
  cin>>l>>r;
  auto it=lower_bound(v.begin(), v.end(),l);
  auto it2=upper_bound(v.begin(), v.end(),r);
  l=it-v.begin();
  r=it2-v.begin();

  cout<<r-l<<endl;

}
}
