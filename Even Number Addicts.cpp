/**
 *    author:  Roman_Emper0r
 *    created: 13th_Feb_2023
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'





void solve()
{
    int n;
    cin>>n;
    int odd=0, even=0;

    for(int i=0; i<n; i++)
    {
        ll tmp;
        cin>>tmp;
        if(tmp%2) odd++;
        else even++;
    }
    int res;

   
     if(odd%4==1)
    {
        if(even%2==1)res=1;
        else res=0;
    }
    else if(odd%4==2) res=0;
    else
    {
        res=1;
    }

    if(res==1) cout<<"Alice\n";
    else cout<<"Bob\n";
   
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


