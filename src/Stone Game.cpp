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
   while(t--)
   {
      int n; 
      cin>>n;
      
      string a,b,s;
      cin>>a>>b;
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      for(int i=0; i<n/2; i++)swap(b[i],b[n-(i+1)]);
      for(int i=0; i<2*n; i++)s+="0"; 
         //cout<<s<<endl;
      int j2=n-1,j1=0,k1=0,k2=n-1,m1=0,m2=(2*n)-1;
      for(int i=0; i<n; i++){
         if(a[j1]<b[k1]){
            s[m1]=a[j1];
            j1++;
            m1++;
         }else{
            s[m2]=a[j2];
            j2--;
            m2--;
         }
         if(b[k1]>a[j1]){
            s[m1]=b[k1];
            m1++;
            k1++;
         }else{
            s[m2]=b[k2];
            m2--;
            k2--;
         }
      }
      cout<<s<<endl;
   }


  
  
}

