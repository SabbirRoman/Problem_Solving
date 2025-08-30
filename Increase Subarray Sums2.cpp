#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n+1];
        a[0]=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            a[i]+=a[i-1];
        }
        
        ll maxi=0,range=0,sum[n+1];
        sum[0]=0;
        for(int i=1; i<=n; i++)
        {
            ll tmp=-1e5;
            for(int j=1;(j+i)<=n+1; j++)
            {
                tmp=max(tmp,(a[j+i-1]-a[j-1]));
            }
            //cout<<tmp<<endl;
            sum[i]=tmp;
            if(maxi<=tmp)range=i;
            maxi=max(tmp,maxi);

        }
        sum[0]=max(maxi,sum[0]);
        cout<<sum[0]<<" ";
        for(ll i=1; i<=n; i++)
        {
            ll tm1=sum[i]+(i*x);
            ll tm2=maxi+(min(range,i)*x);
            sum[i]=max(tm1,max(tm2,sum[i-1]));
            cout<<sum[i]<<" ";
        }cout<<endl;

    }

}
