/**
 *    author:  Roman_Emper0r
 *    created: 12.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {



  ll num=3,ans=2,num2=1;

   for(int i=0; i<50; i++)
   {
   	 cout<<"? "<<num2<<" "<<num<<endl;
   	 fflush(stdout);
   	 ll tmp;
   	 cin>>tmp;
   	 ans=max(ans,tmp);
   	 if(tmp==-1)
   	 {

   	 }
   	 swap(num,num2);
   }
   cout<<"! "<<ans+1<<endl;
   fflush(stdout);

}


