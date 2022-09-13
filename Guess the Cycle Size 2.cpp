/**
 *    author:  Roman_Emper0r
 *    created: 12.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {



  ll l=1,r=10,p;

   for(int i=0; i<18; i++)
   {
   	 cout<<"? "<<l<<" "<<r<<endl;
   	 fflush(stdout);
   	 ll tmp;
   	 cin>>tmp;
     if(tmp==-1)
     {

      break;
     }
     else {
      l=r;
     }
     r*=10;

   }
   r--;
   ll mid;
   while(l<r)
   {
    mid=(l+r)/2;
    cout<<"? "<<l<<" "<<mid<<endl;
     fflush(stdout);
     ll tmp;
     cin>>tmp;

     if(tmp==-1)
     {
      r=mid-1;
     }else
     {
      l=mid+1;
     }

   }

   cout<<"! "<<l<<endl;
   fflush(stdout);

}


