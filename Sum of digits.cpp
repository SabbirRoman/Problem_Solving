/**
 *    author:  Roman_Emper0r
 *    created: 03.06.2022      
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
    
   string s;
   cin>>s;
   ll sum=0;
   for(int i=0; i<s.size();i++)sum+=(s[i]-'0');
      int cnt=0;
      while(sum>=10){
       //  cout<<sum<<endl;
         cnt++;
         ll sum1=0;
         while(sum){
            sum1+=sum%10;
            sum/=10;
         }
         sum=sum1;
      }
      if(s.size()==1)cout<<'0'<<endl;
      else cout<<cnt+1<<endl;
}
