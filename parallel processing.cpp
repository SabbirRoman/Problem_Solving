
/**
 *    author:  Roman_Emper0r
 *    created: 20.04.2022     
**/
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
  	int a[n+5];
  	ll sum1=0;
  	for(int i=0; i<n; i++)
  	{
  		cin>>a[i];
  		sum1+=a[i];
 	 }
 	 
 	 
 		ll ans=1e15,pref=0;
 	 for(int i=0; i<n; i++)
 	 {
 	 	 pref+=a[i];
 	 	 ll rem=sum1-pref;
 	 	 ans=min(ans,max(pref,rem));
 	 	
 	 }
 	 cout<<ans<<"\n";
 	
}
}

