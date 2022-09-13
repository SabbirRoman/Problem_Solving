/**
 *    author:  Roman_Emper0r
 *    created: 07.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif


   int n,m;
   cin>>n>>m;

   std::vector<ll> v1,v2;

   for(int i=0; i<n; i++)
   {
    ll tmp;
    cin>>tmp;
    v1.push_back(tmp);
   }

   for(int i=0; i<m; i++)
   {
    ll tmp;
    cin>>tmp;
    v2.push_back(tmp);
   }

   for(int i=0; i<m; i++)
   {
    auto it =lower_bound(v1.begin(), v1.end(),v2[i]);
    if(it!=v1.end())
    {
        cout<<it-v1.begin()<<" ";
    }
    else
    {
        it--;
        if(*it>v2[i]) cout<<"0 ";
        else cout<<n<<" ";
    }
   }
   cout<<endl;

}


