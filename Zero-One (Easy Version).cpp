/**
 *    author:  Roman_Emper0r
 *    created: 18.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif


   int t;
   cin>>t;
   int test=t;
   while(t--) 
   {
    
    int n;
    cin>>n;

    ll x,y;
    cin>>x>>y;
    string s1,s2;
    cin>>s1>>s2;
    ll ans=0;
    std::vector<int> v;

    for(int i=0; i<n; i++)if(s1[i]!=s2[i]) v.push_back(i);


       // cout<<v.size()<<" okey\n";
    if(v.size()%2) ans=-1;
    else if(v.size()==2 && v[1]-v[0]==1)
    {
        ans=min(x,2*y);
    }
    else ans=((v.size()/2)*y);
//else ans=((v.size()/2)+1)*y;

    cout<<ans<<endl;
   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


