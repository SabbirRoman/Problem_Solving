#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
		ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif
int t;
cin>>t;
while(t--){
	ll num;
	cin>>num;

	if(num%111==0 || num%11==0)num=0;

while(1)
	{
		if(num%11==0)num=0;
		
		if(num<111){
			
			break;
		}else{
			num-=111;
			
		}

	}


	if(num==0)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}
}
