/**
 *    author:  Roman_Emper0r
 *    created: 15.08.2022
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


  
    int t; 
    cin>>t;

    while(t--)
    {
       int n;
       cin>>n;

      std::vector<ll> v,v2;

      for(int i=0; i<n; i++)
      {
      	ll tmp;
      	cin>>tmp;
      	v.push_back(tmp);
      }
       for(int i=0; i<n; i++)
      {
      	ll tmp;
      	cin>>tmp;
      	v2.push_back(tmp);
      }
      for(int i=0; i<n; i++)
      {
      	auto it= lower_bound(v2.begin(), v2.end(),v[i]);
      	cout<<*it -v[i]<<" ";
      }
      cout<<endl;
      std::vector<ll> v3;
      ll mx=v2[n-1],x=n-1;
      for(int i=n-1; i>=0; i--)
      {
      	auto it= lower_bound(v2.begin(), v2.end(),v[i]);
      	
      	v3.push_back(mx-v[i]);
      	int index = it-v2.begin();
      	
      	if(i==index){
      		for(int j=n; j>i; j-- )
      		{
      			n--;
      		}
      	}
      	mx=v2[n-1];

      }
      for(int i=v3.size()-1; i>=0; i--)
      {
      	cout<<v3[i]<<" ";
      }
      cout<<endl;
    }
  }


