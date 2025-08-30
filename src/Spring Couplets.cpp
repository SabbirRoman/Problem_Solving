/**
 *    author:  Roman_Emper0r
 *    created: 31.05.2022      
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
    


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    std::vector<int> v1,v2;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int tmp=s[s.size()-1]-'0';
        v1.push_back(tmp);
    }
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int tmp=s[s.size()-1]-'0';
        v2.push_back(tmp);
    }
    bool ans=true;

    for(int i=0; i<n-1; i++)
    {
        if(v1[i]==v2[i]) ans=false;
    }
    if(v1[n-1]<=v2[n-1]) ans=false;

    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   }
}