/**
 *    author:  Roman_Emper0r
 *    created: 29.08.2022
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
      double l,w;
      cin>>l>>w;

      if(l==0 && w==0) break;

      double  big=l, small=l/2,mid;
      int cnt=0;
      while(small<big)
      {
           // cout<<small<<" "<<big<<endl;
            cnt++;
            if(cnt==10000) break;
             mid=(big+small)/2;
           
          
            double tmp=l-mid,tmp2=w-mid;
             double tmp_water=sqrt((tmp2*tmp2)+(tmp*tmp));

             if(tmp_water>mid)
             {
                  small=mid;
             }
             else big=mid;
      }

      double d=mid;
      


      small=w-mid;
      big=w;
      cnt=0;
      while(small<big)
      {
            cnt++;
            if(cnt==10000) break;
            mid=(small+big)/2;
            double tmp_water=sqrt((mid*mid)+((l-d)*(l-d)));
            if(tmp_water>d)
                  big=mid;
            else small=mid;
      }
      double tota_water=sqrt(((l-d)*(l-d))+((mid)*(mid)));
      double total_land=d+w-mid;

      cout<<tota_water<<" "<<d<<endl;
      cout<<tota_water+total_land<<endl;


     }
}


