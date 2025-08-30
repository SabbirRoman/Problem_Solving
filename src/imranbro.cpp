
#include<bits/stdc++.h>
using namespace std;



// Driver program to test above function
int main()
{
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
	long long int n,k,x,tmp;
	cin>>n>>k>>x;
	long long int a[n+5];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];

	}
	sort(a,a+n);
	for(int i=n-1; i>=0; i--)
	{
		tmp=a[i]/x;
		tmp=min(k,tmp);
		k-=tmp;
		a[i]-=(tmp*x);
		if(k<=0)break;

	}

if(k>0){
	sort(a,a+n);
	long long int j=n-1;
	for(int i=0; i<k; i++){
		a[j]=0;
		j--;
		if(j<0)break;
	}
}

	tmp=0;
for(int i=0; i<n; i++)tmp+=a[i];
	cout<<tmp<<endl;


}
