#include<bits/stdc++.h>
#include <list>
#define ll long long
using namespace std;


int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     std::vector<int> v,v2,v3;
     list<int>l,l2;
     for(int i=0; i<n; i++){
      int tmp;
      cin>>tmp;
      v.push_back(tmp);
      l.push_back(tmp);
     }
     
     for(int i=0; i<n-1; i++){
      int tm1=l.front();
      l.pop_front();
      int tm2=l.back();
      l.pop_back();
      
      if(tm1>tm2){
         l2.push_front(tm1);
         l.push_back(tm2);

     }else{
      l2.push_back(tm2);
      l.push_front(tm1);
     }
     
     
   }
   int tm=l.front();
  
   l.pop_front();
   if(tm==v[0])l2.push_front(tm);
   else l2.push_back(tm);

   
   for(int i=0; i<n; i++){
      int tm1=l2.front();
      l2.pop_front();
      v2.push_back(tm1);
      l.push_back(tm1);
   }
        for(int i=0; i<n-1; i++){
      int tm1=l.front();
      l.pop_front();
      int tm2=l.back();
      l.pop_back();
      
      if(tm1<tm2){
         l2.push_front(tm1);
         l.push_back(tm2);

     }else{
      l2.push_back(tm2);
      l.push_front(tm1);
     }
     
     
   }
    tm=l.front();
  
   l.pop_front();
   if(tm==v[0])l2.push_front(tm);
   else l2.push_back(tm);

   int ans=1;
   for(int i=0; i<n; i++){
      int tm1=l2.front();
      l2.pop_front();
      v3.push_back(tm1);
      
   }


    for(int i=0; i<n; i++){
      if(v[i]!=v3[i]){
         ans=0;
         break;
      }
    }
   if(ans){
      for(int i=0; i<n; i++)cout<<v2[i]<<" ";
         cout<<endl;
   }else cout<<"-1"<<endl;
   
}
}