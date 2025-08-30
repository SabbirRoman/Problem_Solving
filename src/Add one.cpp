/**
 *    author:  Roman_Emper0r
 *    created: 2nd March 2023     
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long
 

ll mod=10e9+7;
 

 
 
int main() {
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
 
 int t;
 cin>>t;

 while(t--)
 {
    ll a[10],b[10];
    for(int i=0; i<10; i++) a[i] =0 , b[i]=0;

    ll n,m;
    cin>>n>>m;
    a[1]++;
    for(int ii=0; ii<10; ii++)
    {
        


    for(int i=0; i<10; i++)
    {
        if(i==9)
        {
            b[i]+=a[i];
            b[0]+=a[i];
            b[1]+=a[i];
        }
        else
        {
            b[i]+=a[i];
            b[i+1]+=a[i];
        }
    }
    for(int i=0; i<10; i++) a[i]=b[i],b[i]=0;


    }
    for(int i=0; i<10; i++)cout<<a[i]<<endl;

 }
   
}