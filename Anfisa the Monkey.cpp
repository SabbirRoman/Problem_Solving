/**
 *    author:  Roman_Emper0r
 *    created: 16.05.2022      
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
   int k,a,b;
   cin>>k>>a>>b;
   string s;
   cin>>s;
   int len=s.size();
   if(len>(k*b) || len<(k*a))cout<<"No solution\n";
   else
   {
     int sz;
     for(int i=a; i<=b; i++){
          int p= len-(i*k);
          if(p>=0 && p<=k)sz=i;
          //cout<<len<<" "<<sz<<endl;
     }
        
         int tmp=len-(k*sz),mark=0;
     while(k--)
     {
         if(tmp)
          {
               for(int i=mark; i<(sz+mark+1); i++)cout<<s[i];

                    cout<<endl;
               mark+=(sz+1);
               tmp--;
          }
          else{

               for(int i=mark; i<(sz+mark); i++)cout<<s[i];
                    cout<<endl;
               mark+=(sz);
          }
     }
   }
   
}