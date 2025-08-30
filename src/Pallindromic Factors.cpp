
/**
 *    author:  Roman_Emper0r
 *    created: 24.04.2022     
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int check_pallindrome(ll n)
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

  void solve()
  {

    ll n,cnt=0;
    cin>>n;
    for(int i=1; i*i<=n; i++)
    {
      if(n%i==0){
        cnt+=check_pallindrome(i);
        ll j=(n/i);
       if(i!=j) cnt+=check_pallindrome(j);
      }
    }

    cout<<cnt<<endl;
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
