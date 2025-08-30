/**
 *    author:  Roman_Emper0r
 *    created: 12.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {



  ll num=1,ans=2,num2=4;

   for(int i=0; i<25; i++)
   {
   	 cout<<"? "<<num2<<" "<<num<<endl;
   	 fflush(stdout);
   	 ll tmp;
   	 cin>>tmp;

     cout<<"? "<<num<<" "<<num2<<endl;
     fflush(stdout);
     ll tmp2;
     cin>>tmp2;

   	 if(tmp==-1 || tmp2==-1)
   	 {
      ans=num2-1;
      break;
   	 }
     else if(tmp==tmp2)num2++;
     else {
     ans=tmp2+tmp;
     break;
   	 }
   }
   cout<<"! "<<ans<<endl;
   fflush(stdout);

}


