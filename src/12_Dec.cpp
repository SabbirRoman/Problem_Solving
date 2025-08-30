#include<bits/stdc++.h>
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
  int a[n+5],b[n+5];
  for(int i=0; i<n; i++)
  {
   int tmp;
   cin>>tmp;
   a[tmp]=i;
   b[i]=tmp;
  }
   int num=1;
   for(int i=0; i<n-2;i++){
      if(a[num]!=i){
         if(a[n]!=i){
            int tmp=b[i];
            b[i]=num;
            b[a[num]]=n;
            b[a[n]]=tmp;
            
           int  tmp2=a[n];
            a[n]=a[num];
            a[num]=i;
            a[tmp]=tmp2;
            

         }else{
             int tmp=b[i];
            b[i]=num;
            b[a[num]]=n-1;
            b[a[n-1]]=tmp;
            
           int  tmp2=a[n-1];
            a[n-1]=a[num];
            a[num]=i;
            a[tmp]=tmp2;
            
         }
      }
      num++;
   }
   if(b[n-1]==1)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
}