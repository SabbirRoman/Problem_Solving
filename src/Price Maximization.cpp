/**
 *    author:  Roman_Emper0r
 *    created: 07.06.2022      
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
  	   
      ll n,k,ans=0;
      cin>>n>>k;
      int a[k]={0};

      for(int i=0; i<n; i++){
         ll tmp;
         cin>>tmp;
         ans+=(tmp/k);
         ll tmp1=tmp%k;

         a[tmp1]++;
      }
     int i=1, j=k-1;
     while(i<j){
        ll tmp=min(a[i],a[j]);
       if((i+j)>=k) {
        ans+=tmp;
        a[i]-=tmp;
        a[j]-=tmp;
        if(a[i]==0)i++;
        if(a[j]==0)j--;
    }else i++;
     }
     int cnt=0;
     for(int i=(k/2)+1; i<k; i++)cnt+=a[i];
        if(k%2==0)cnt+=a[k/2];
      cout<<ans+(cnt/2)<<endl;
}
}
