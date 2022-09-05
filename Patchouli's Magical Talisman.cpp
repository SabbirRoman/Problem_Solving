/**
 *    author:  Roman_Emper0r
 *    created: 03.06.2022      
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
    
   int t;
   cin>>t;
   while(t--){
  	ll n; 
  	cin>>n;
  	ll a[n],odd=0,even=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==1)odd++;
        else even++;
    }
    if(odd==n)cout<<"0\n";
    else if(even<n)cout<<even<<endl;
    else{
        ll cnt=1e9;
        for(int i=0; i<n; i++){
            ll tmp=0,tmp2=a[i];
            while(tmp2%2==0){
                tmp2/=2;
                tmp++;
            }
            cnt=min(cnt,tmp);
        }
        cout<<n-1+cnt<<endl;
    }
   }
}
