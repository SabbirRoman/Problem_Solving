/**
 *    author:  Roman_Emper0r
 *    created: 07-09-2023  20:35:00
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define          sz(a)               (int)a.size()
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define ii pair<int, int>
ll mod;

void solve(){
ll n,x,y;
cin>>n>>x>>y;
ll tmp=(x*y)/__gcd(x,y);
tmp= n/tmp;
ll a=n/x, b=n/y;
a-=tmp;
b-=tmp;

b=(b*(b+1))/2;
ll c=n-a;
a= (n*(n+1))/2;
c= (c*(c+1))/2;
a-=c;

cout<<a-b<<endl;
 
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
      cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


