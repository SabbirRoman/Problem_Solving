/**
 *    author:  Roman_Emper0r
 *    created: 23.05.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long
ll n,ans[25];

void fun(ll x, ll cnt)
{
    string s=to_string(x);
         int    length=s.size();
         ans[length]=min(ans[length],cnt);
         if(n==length){
            
            return;
         }

         ll temp=x;
             
             while(temp!=0)
             {
                ll tmp=temp%10;
                if(tmp>1){
                    fun((x*tmp),(cnt+1));
                }
                temp/=10;
             }
             return;

}

int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   for(int i=0; i<25; i++)ans[i]=1e9;


   ll x;
   cin>>n>>x;
   int length;
   string s=to_string(x);
   length=s.size();

   if(n==length)cout<<"0\n";
   else{
    if(x==1 || length>n)cout<<"-1\n";
    else{
        ll cnt=0;
        fun(x,cnt);
        cout<<ans[n]<<endl;
    }
   }
}