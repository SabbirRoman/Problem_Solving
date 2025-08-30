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
ll l,r;
cin>>l>>r;
if(r>3)
{
   bool ans=true;
   for(int i=r; i>=l; i--)
   {
      if(i%2==0)
      {
         cout<<i-2<<" "<<2<<endl;
         ans=false;
        return;
      }
   }

   if(l==r && r%2==1)
   {
      for(ll i=2; i*i<=r; i++)
      {
         if(r%i==0)
         {
            cout<<r-i<<" "<<i<<endl;
            return;
         }
      }
   }
   if(ans) cout<<"-1\n";

}
else
{
   cout<<"-1\n";
}
 
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


