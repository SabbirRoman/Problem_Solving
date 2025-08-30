
#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long int fun(ll a, ll b){
	return (a*a*a)+(a*a*b)+(a*b*b)+(b*b*b);
}


// Driver program to test above function
int main()
{
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
	long long int n;
	cin>>n;

	
	long long int ans=8e18,j=1e6;
	

	for(int i=0; i<=1e6; i++){
		 while(fun(i,j)>=n && j>=0){
      ans=min(ans,fun(i,j));
      j--;
    }
	}
	cout<<ans<<endl;



}
