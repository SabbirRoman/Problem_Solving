/**
 *    author:  Roman_Emper0r
 *    created: 20th_april_2023
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
ll n,m;
cin>>n>>m;
ll max_team, min_team;

max_team= n-(m-1);
//cout<<max_team<<endl;
max_team =(max_team *(max_team-1))/2;

ll tmp=n/m;
min_team= (tmp*(tmp-1))/2;
min_team*=m;
min_team+=((n%m)*tmp);

cout<<min_team<<" "<<max_team<<endl;

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


