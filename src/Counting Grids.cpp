/**
 *    author:  Roman_Emper0r
 *    created: 26.06.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long



int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
  ll m=998244353;
  ll n,nn;
  cin>>n;
  nn=n*n-2;
  ll np2,n_minus2_fact=1,pairs,ans=1;
  pairs=(n*(n-1))/2;
  
  np2=(n*(n-1)%m);
  

  for(int i=2; i<=nn; i++)n_minus2_fact=(n_minus2_fact*i)%m;
    ans=(((2*n)-1)*ans*pairs)%m;
    ans=(ans*np2)%m;
    ans=(ans*n_minus2_fact)%m;
    

   
  cout<<ans<<endl;


   }


