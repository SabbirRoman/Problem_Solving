/**
 *    author:  Roman_Emper0r
 *    created: 2nd_March_2023
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define ii pair<int, int>



void solve(){

ll sum=0, n;
cin>>n;

for(int i=0; i<n; i++)
{
    ll tm;
    cin>>tm;
    if(tm<0) sum+=abs(tm);
}
cout<<sum<<endl;

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin) ;
    freopen("output.txt","w",stdout);
 #endif
       int  t=1;
      //cin>>t ;
       
        
    
       while(t--){
       
           solve() ;
       }
       return 0 ;

}


