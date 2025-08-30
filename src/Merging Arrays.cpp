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


   int n,m; cin>>n>>m;
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
    ll tmp=1e9+5;
    v1.push_back(tmp);
    v2.push_back(tmp);

    int i=0,j=0;

    while(1)
    {
        if(v1[i]==tmp&&v2[j]==tmp) break;

        if(v1[i]<v2[j])
        {
            cout<<v1[i]<<" ";
            i++;
        }
        else
        {
            cout<<v2[j]<<" ";
            j++;
        }
        
    }
cout<<endl;
}


