/**
 *    author:  Roman_Emper0r
 *    created: 10.08.2022      
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
   while(t--){

    ll a[10];

    ll sum=0,mx=0;
     
    for(int i=0; i<10; i++){
        cin>>a[i];
        sum+=a[i];
        mx=max(mx,a[i]);
        
    }
    if(sum==a[0]) cout<<string(sum,'0')<<endl;
   else if(mx-(sum/2)>1) cout<<"-1"<<endl;
   else if(a[0]>(sum/2) ) cout<<"-1"<<endl;
   else
   {
    int p=0;
    while(sum>0)
    {

        
        int mx_in=0;
        mx=0;
        for(int i=9; i>=0; i--){
            if(mx<a[i]){
                mx=a[i];
                mx_in=i;
               
            }
        }
        //cout<<mx_in<<" max_index"<<endl;
        if(a[mx_in]>(sum- a[mx_in]))
        {
            cout<<mx_in;
            p=mx_in;
            sum--;
            a[mx_in]--;
        }
        else
        {
            
            for(int i=0; i<10; i++)
            {

                
                if(a[i]>0 && p!=i)
                {       
                    
                     cout<<i;
            p=i;
            sum--;
            a[i]--;
            break;
                }
            }
        }
       
      
       
    }
    cout<<endl;
   }
   }
}