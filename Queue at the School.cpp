/**
 *    author:  Roman_Emper0r
 *    created: 22.08.2022
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

   int n,t;
   cin>>n>>t;

   string s;
   cin>>s;
   int a[n]={0};

   for(int i=0; i<n; i++)
   {

    if(s[i]=='B' && a[i]!=1)
    {
        for(int j=min(n-1,i+t); j>i; j--)
        {
            //cout<<a[j]<<endl;
            if(s[j]=='G' && a[j]!=1)
            {
                cout<<i<<" "<<j<<endl;
                cout<<s[i]<<" "<<s[j]<<endl;
                swap(s[j],s[i]);
                a[i]=1;
                a[j]=1;
                
                break;
            }
        }
    }
   }
   cout<<s<<endl;
  
    
  }


