#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
   ll n,q;
   cin>>n>>q;

   std::vector<ll> v[n+1];
   int largest=-1,smallest[n+1][1],small=1,ans;

       

   for(int i=1; i<=n; i++){
    v[i].push_back(i);
    smallest[i][0]=0;
}
 smallest[1][0]=n;

    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        

        if(a>b)swap(a,b);
        ll a1=a,b1=b;

        int p=v[a][0];
        while(p!=v[a][0])
        {
            a=p;
            p=v[a][0];
        }
        a=p;
        v[a1][0]=a;

        p=v[b][0];
        
        while(p!=v[b][0])
        {

            b=p;
            p=v[b][0];
        }
        b=p;
        v[b1][0]=b;
       

        if (a==b)
        {
            if(largest==n)cout<<"0\n";
            else cout<<ans<<endl;

        }
        else
        {
           ll tmp1=v[a].size(),tmp2=v[b].size();
           smallest[tmp1][0]--;
           smallest[tmp2][0]--;
           smallest[tmp2+tmp1][0]++;

            for(int i=0; i<v[b].size(); i++)v[a].push_back(v[b][i]);

                //sort(v[a].begin(), v[a].end());
                v[b][0]=a;
                tmp1=v[a].size();
               if(tmp1>largest)largest=tmp1;

               //cout<<smallest[small][0]<<" "<<small<<" "<<largest<<endl;

               if(smallest[small][0]<1)
               {
                for(int i=small+1; i<=n; i++)
                {
                    if(smallest[i][0]>0){
                        small=i;
                        break;
                    }
                }
               }

               ans=largest-small;

               cout<<ans<<endl;

 
        }
    }
}