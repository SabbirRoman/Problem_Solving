/**
 *    author:  Roman_Emper0r
 *    created: 16.05.2022      
**/
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
     int r,c,k,cnt=0,cnt2=0;
     cin>>r>>c>>k;
     for(int i=r; i<=8; i++) if(abs(i-r)<=k)cnt++;
     for(int i=r-1; i>0; i--)if(abs(i-r)<=k)cnt++;
      for(int i=c; i<=8; i++) if(abs(i-c)<=k)cnt2++;
     for(int i=c-1; i>0; i--)if(abs(i-c)<=k)cnt2++;

     
cout<<cnt*cnt2<<endl;
   }
}