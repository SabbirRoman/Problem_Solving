
/**
 *    author:  Roman_Emper0r
 *    created: 24.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<int> s;
int check_pallindrome(int n)
{
  string s=to_string(n);
  int i=0,j=s.size()-1;
  while(i<=j){
    if(s[i]!=s[j])return 0;
    i++;
    j--;
  }
  return 1;
}
void primeFactors(ll n)
{
    ll c=2;
    while(n>1)
    {
        if(n%c==0){
        s.insert(c);
        n/=c;
        }
        else c++;
    }
}

  void solve()
  {

   
  }

int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  
  int t,test;
  cin>>t;
  test=t;
  while(t--){
    cout<<"Case #"<<test-t<<": ";
    solve();
  }
  }
