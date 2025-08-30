/**
 *    author:  Roman_Emper0r
 *    created: 28.05.2022      
**/
#include<bits/stdc++.h>

using namespace std;


// macros as defined above
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long


int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int n,q;
   cin>>n>>q;
  
   ordered_set s1,s2;
   while(q--){
    int tmp;
    cin>>tmp;
 int x1,y1,x2,y2;
    if(tmp==1){
       cin>>x1>>y1;
       s1.insert(x1);
       s2.insert(y1);
    }else if(tmp==2){
       cin>>x1>>y1;
       s1.erase(s1.find(x1));
       s2.erase(s2.find(y1));
    }else{
         cin>>x1>>y1>>x2>>y2;
         int cnt1=0;
        int k1=s1.order_of_key(x1);
        int k2=s1. order_of_key(x2+1);
        

        if((k2-k1)==(x2-x1+1)&&(x1==*(s1.find_by_order(k1)))&&(x2==*(s1.find_by_order(k2-1))))cnt1=1;

       
         k1=s2.order_of_key(y1);
         k2=s2.order_of_key(y2+1);

        if((k2-k1)==(y2-y1+1)&&(y1==*(s2.find_by_order(k1)))&&(y2==*(s2.find_by_order(k2-1))))cnt1=1;

              

        if(cnt1==0)cout<<"NO\n";
        else cout<<"YES\n";
    }
   }
}