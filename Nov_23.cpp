#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve_it()
{
  int n,m,k;
  string s;
  cin>>n>>m>>k>>s;
  int ans = 0, cnt = 0, tmp = k;
  bool used = false;
  for(int i=0; i<s.size(); i++)
  {
   if(s[i]=='1')
   {
      if(tmp>0) tmp--;
      cnt = 0;
      // used = false;
   }
   else if(used)
   {
      tmp--;
      
   }
   else
   {
      tmp = k;
      cnt++;
      if(cnt==m)
      {
         ans++;
         used = true;
         tmp--;
      }

   }
   if(tmp==0){
         used = false;
         cnt = 0;
      }
   // cout<<i<<" "<<cnt<<" "<<tmp<<" "<<ans<<endl;
  }
  cout<<ans<<endl;
}

int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 

int t;
cin>>t;
while(t--)
{
   solve_it();
   
}


}