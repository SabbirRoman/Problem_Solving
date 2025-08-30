/**
 *    author:  Roman_Emper0r
 *    created: 29.08.2022
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long




void solve(){
          
}

int main() {
      #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif

     int t;
     cin>>t;
     while(t--)
     {
          int n; cin>>n;

          ll a[n];

          ll cnt=1, cnt2=2000000;
          while(cnt<=cnt2)cnt*=2;
          std::vector<int> v1,v2;

         if(n%8==1)
         {
          v1.push_back(9);
          v1.push_back(2);
          v1.push_back(8);
          v1.push_back(7);
          v1.push_back(3);
          v1.push_back(0);
          v1.push_back(4);
          v1.push_back(6);
          v1.push_back(5);

         
          n-=9;
         }
         if(n%8==2)
         {
          v1.push_back(0);
          v1.push_back(8);
          v1.push_back(1);
          v1.push_back(9);
          v1.push_back(2);
          v1.push_back(10);
          v1.push_back(3);
          v1.push_back(11);
          v1.push_back(14);
          v1.push_back(12);

          n-=10;
         }
         if(n%8==3)
         {

          v1.push_back(2);
          v1.push_back(1);
          v1.push_back(3);

          n-=3;
         }
         if(n%8==4)
         {
          v1.push_back(2);
          v1.push_back(1);
          v1.push_back(3);
          v1.push_back(0);
          n-=4;
         }
         if(n%8==5)
         {
          v1.push_back(2);
          v1.push_back(0);
          v1.push_back(4);
         v1.push_back(5);
          v1.push_back(3);
          n-=5;
     }
     if(n%8==6)
     {
          v1.push_back(4);
          v1.push_back(1);
          v1.push_back(2);
          v1.push_back(12);
          v1.push_back(3);
          v1.push_back(8);
          n-=6;
     }
     if(n%8==7)
     {
          v1.push_back(1);
          v1.push_back(2);
          v1.push_back(3);
          v1.push_back(4);
          v1.push_back(5);
          v1.push_back(6);
          v1.push_back(7);
          n-=7;
     }
     for(int i=0; i<v1.size(); i++)cout<<v1[i]<<" ";
         cnt2=cnt/2;
         for(int i=0; i<(n/2); i++)
         {
          cnt--;
          cnt2--;
         cout<<cnt<<" "<<cnt2<<" ";
         }
      
     cout<<endl;

     }

}


