/**
 *    author:  Roman_Emper0r
 *    created: 18th_March_2023
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

    ll n;
    cin>>n;
    vector <ll> v;
    for(int i=0; i<n;i++)
    {
        ll tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    ll a[200005];
    for(int i=0; i<200005; i++)a[i]=0;
    a[0]=1;
    a[1]=1;
  //  ll mx=1;
    bool ans=true;
    if(a[v[0]]==0) ans=false;

    for(int i=1; i<n; i++)
    {

        if(a[v[i]]==0) 
        {
            ans=false;
            break;
        }
        
        for(int j=200000; j>=1; j--) if(a[j]==1 ) a[j+v[i]]=1;

           
    }

    if(ans) cout<<"YES\n";
    else cout<<"NO\n";


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


