#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
 // cout<<"How many strings :";
  int n; cin>>n;
 // cout<<"\n Insert the strings :";
  char ch[n+2][10];
  for(int i=0; i<n; i++)cin>>ch[i];
 //  cout<<"Put the string which to be inserted : ";
   char str[10];
   cin>>str;
   int pos=n;
   for(int i=0; i<=n; i++){
      if(strcmp(ch[i],str)>0){
         pos=i;
         char tmp[10];
         strcpy(tmp,ch[i]);
         strcpy(ch[i],str);
         strcpy(str,tmp);
         
      }
   }
   for(int i=0; i<=n; i++)cout<<ch[i]<<endl;

}