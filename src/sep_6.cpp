/**
 *    author:  Roman_Emper0r
 *    created: 06.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
 

void solve()
{
    ll n,m;
    cin>>n>>m;

    if(n>m)cout<<"No\n";
    else
    {
        if(n%2==0 && m%2!=0) cout<<"No\n";
        else{
             cout<<"Yes\n";
             if(n%2==0 && m%2==0)
             {
                for(int i=1; i<n-1; i++)cout<<m/n<<" ";
            ll tmp=m-(m/n)*(n-2);
            cout<<tmp/2<<" "<<tmp/2<<endl;
             }
             else{
                for(int i=1; i<n; i++)cout<<m/n<<" ";
        cout<<m/n+(m%n)<<endl;
             }
        
        }
       
    }
}

int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif

   int t;
   cin>>t;
   while(t--)
   {
    solve();
   }
}


