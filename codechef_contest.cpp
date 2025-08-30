/**
 *    author:  Roman_Emper0r
 *    created: 02.11.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
     
   ll n;
   cin>>n; 
string s;
cin>>s;
bool ans=true;
int cnt=0;

for(int i=0; i<n; i++)
{
    if(s[i]=='0')
    {
        if(cnt%2) ans=false;
    }
    else cnt++;
}
if(cnt%2)ans=false;
if(ans || n==1) cout<<"YES\n";
else cout<<"NO\n";

}
int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
       cin >> t ;
       while(t--){
           solve() ;
       }
       return 0 ;

}


