#include<bits/stdc++.h>
#define ll long long
 
using namespace std;

void solve_it(ll num1, ll num2)
{
   
   if(num1%2 == num2%2) cout<<1<<" ";
   else cout<<0<<" ";

   return;
}

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  

  ll test;
  cin>>test;
  while(test--)
  {
      ll a,b,c;
      cin>>a>>b>>c;
      ll tmp = min(a,min(b,c));
     
      solve_it(b,c);
      solve_it(a,c);
      solve_it(a,b);
      cout<<endl;
  }

}

