#include <bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll a[10];

        for(int i=0; i<10; i++)a[i]=0;

        bool ans=true;
        for(int i=0; i<n; i++)
        {
            ll tmp;
            cin>>tmp;
            //cout<<ans<<endl;

            if(tmp%10==1 || tmp%10==2 || tmp%10==4 || tmp%10==8)
            {
                ll tmp2=(tmp/10)%10;
                tmp%=10;
                
                if(a[tmp]==0 || a[tmp]==(tmp2%2)+1)a[tmp]= (tmp2%2)+1;
                else {
                    ans=false;
                    //cout<<"ami ekhane"<<endl;

                }
            }
            else if(tmp%10==3 || tmp%10==6 || tmp%10==7 || tmp%10==9)
            {
                ll tmp2=(tmp/10)%10;
                tmp%=10;

                if(a[tmp]==0 || a[tmp]!=(tmp2%2)+1)a[tmp]= ((tmp2+1)%2)+1;
                else {

                    ans=false;

                }
            }else if(tmp%10==5)
            {
                if(a[tmp%10]==0 || a[tmp%10]==tmp+5)a[tmp%10]=tmp+5;
                else ans=false;
            }
            else {
                if(a[tmp%10]==0 || a[tmp%10]==tmp)a[tmp%10]=tmp;
                else ans=false;
            }
        }


         if((a[0] && a[5])&& a[0]!=a[5] )ans=false;



   // else if((a[0]||a[5]) && (a[1]||a[2]||a[3]||a[4]||a[6]||a[7]||a[8]||a[9]))ans=false;

    for(int i=0; i<10; i++)
    {
        if(a[i]!=0 )
        {
            for(int j=0; j<10; j++)
            {
                if(a[j]!=0 ) 
                {
                    if(a[i]!=a[j]) ans=false;
                }
            }
        }
    }
    if(n==1) ans=true;
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";


    }



}