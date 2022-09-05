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
   string s = bitset<18> (l).to_string();

   int count[20]={0};
   for(int j=l; j<=r; j++){
      int start=0;
      
      for(int i=s.size(); i>=0; i--)
   { 
      if(s[i]=='1' && start==1)count[i]++;
      else if(s[i]=='0' && start==0){

         start=1;
         s[i]='1';
      }
      else if(s[i]=='1' && start==0)
         {  count[i]++;
            s[i]='0';
         }
      else {}

   }
   }
   int ans=0;
   for(int i=0; i<18; i++)
      { 
      ans=max(ans,count[i]);
   }

    printf("%d\n",((r-l+1)-ans) );
   

  }
}

