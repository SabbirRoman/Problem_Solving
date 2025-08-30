/**
 *    author:  Roman_Emper0r
 *    created: 21.05.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int solve(int n)
{
   if(n==0) return 0;
   if(n%2) return 4*solve(n/2)+3;
   else return 4*solve(n/2)-(4*(n/2));
}

int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int n;
   cin>>n;
   int ans=solve(n);
   cout<<ans<<endl;
}