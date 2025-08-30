/**
 *    author:  Roman_Emper0r
 *    created: 25th_July_2023
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



void solve(){

 // cout<<"Bismillah\n";
    int n;
    cin>>n; 
    ll tmpp= (n*(n-1))/2;

    set<ll>st;
    map<ll,ll>mp1;
    for(int i=0; i<tmpp; i++)
    {
        ll tm;
        cin>>tm;
        st.insert(tm);
        mp1[tm]++;
    }
    int tmp=n-1;
    ll mx=0;
   
              for (auto it = st.begin(); it != st.end(); ++it) 
              {
                ll tmp2=mp1[*it];
                while(tmp2)
                {
                    cout<<*it<<" ";
                    mx=max(mx,*it);
                    tmp2-=tmp;
                    tmp--;
                }
              }
              cout<<mx<<endl;
      
    
   
   
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


