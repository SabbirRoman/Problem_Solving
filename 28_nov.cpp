#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   

   int n,q;
   cin>>n>>q;
   string s;
   cin>>s;
   int cnt=0;
   for(int i=0; i<n; i++){
      if(s[i]=='a'&& s[i+1]=='b' && s[i+2]=='c')cnt++;
   }

   for(int i=0; i<q; i++){
      int tm;
      char ch;
      cin>>tm>>ch;
      if(n==1){
         cout<<cnt<<endl;
         continue;
      }else if(n==2){
         cout<<cnt<<endl;
         continue;
      }
      tm--;
      
      if(tm<=(s.size()-3)&&s[tm]=='a'&& s[tm+1]=='b' && s[tm+2]=='c')cnt--;
      else if((tm<=(s.size()-2)&&tm>=1)&&s[tm-1]=='a'&& s[tm]=='b' && s[tm+1]=='c')cnt--;
      else if((tm<=(s.size()-1)&&tm>=2)&&s[tm-2]=='a'&& s[tm-1]=='b' && s[tm]=='c')cnt--;
      else {}
        s[tm]=ch;

     if(tm<=(s.size()-3)&&s[tm]=='a'&& s[tm+1]=='b' && s[tm+2]=='c'){cnt++; }
     else if((tm<=(s.size()-2)&&tm>=1)&&s[tm-1]=='a'&& s[tm]=='b' && s[tm+1]=='c')cnt++;
     else if((tm<=(s.size()-1)&&tm>=2)&&s[tm-2]=='a'&& s[tm-1]=='b' && s[tm]=='c')cnt++;
     else {}
      cout<<cnt<<endl;

}

}

