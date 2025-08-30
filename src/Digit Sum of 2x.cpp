#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
		ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif



int n;
cin>>n; 
cout<<2*n<<endl;
if(n%4) cout<<n%4;
for(int i=0; i<n/4; i++)cout<<"4";
	cout<<endl;
}
