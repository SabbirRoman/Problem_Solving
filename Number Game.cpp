/**
 *    
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long




void solve(){
   
int n;
cin>>n; 
set<int> s;
std::vector<int> v;
for(int i=0; i<n;i++)
{
    int tm;
    cin>>tm;
   v.push_back(tm);

}
sort(v.begin(), v.end());
int ans=n;
for(int i=0; i<n ; i++)
{
    if(i+1<v[i]){
        ans=i;
        break;
    }
}




cout<<ans<<endl;
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


