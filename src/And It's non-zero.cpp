#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
  int t;
  scanf("%d",&t);
  while(t--)
  {
   int l,r;
   scanf("%d%d",&l,&r);
   ll tmp=1,cnt=0,ans=0;
   ans=(r/2)-(l/2);
   if(r%2)ans++;
   while(tmp<r){
      tmp*=2;
     if(tmp>=l && r>=tmp) cnt=tmp;
     if(tmp>=r)break;
     
   }
   cnt/=2;
   if(cnt<l && cnt!=0)cnt-=(l-cnt);
   cout<<tmp<<endl;
   int baad=(tmp-1)-r;
   tmp/=2;
   if(l>tmp)baad+=(l-tmp);
   tmp=tmp-baad;
   int numbers=r-l+1;
   cout<<ans<<" "<<tmp<<" "<<cnt<<endl;
   ans=max({tmp,ans,cnt});
   cout<<numbers-ans<<endl;
   

  }
}

