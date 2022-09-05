#include <bits/stdc++.h>
#define ll long long 
using namespace std;



int main(){
		ios_base::sync_with_stdio(false);cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 

ll n,a,b;
cin>>n>>a>>b;

if(n<a)cout<<"0\n";
else if(n==a)cout<<"1\n";
else if(a>b)
{
	ll tmp2=n%a;
	if(tmp2>b)
	{
		ll tmp=n/a;
	tmp=tmp*b;
	if(n%a==0)tmp-=(b-1);
	cout<<tmp<<endl;
//	cout<<tmp+1+(n%a)<<endl;
	}
	else
	{
		ll tmp=n/a;
	tmp=(tmp-1)*b;
	//if(n%a==0)tmp-=(b-1);
	cout<<tmp+1+(n%a)<<endl;
	}
	
} 
else
{
	cout<<n-a+1<<endl;
}



	
	

}