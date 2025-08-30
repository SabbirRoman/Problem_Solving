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
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n+6];
        map<ll,int>m;
        bool ans=true;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
            if(m[a[i]]>(n/2))ans=false;
        }
        if(ans==false || m.size()<3)cout<<"NO\n";
        else{
            cout<<"YES\n";
            sort(a+1,a+n+1);
            for(int i=1; i<=n; i++)cout<<a[i]<<" ";
                cout<<endl;
            for(int i=(n/2)+1; i<=n; i++)cout<<a[i]<<" ";
            for(int i=1; i<=(n/2); i++)cout<<a[i]<<" ";
            cout<<endl;
        }
    }
   
}