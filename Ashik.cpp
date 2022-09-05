#include<bits/stdc++.h>
using namespace std;
int ones(int n){
   int m=n,digit_size=0;
      while(m!=0){
         digit_size++;
         m/=10;
      }
      m=0;
      while(digit_size!=0){
         m=(m*10)+1;
         digit_size--;
      }
      return m;
}

int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      
      int ans=1,m;
      
      while(m!=0){
         m=ones(n);
         if(m==11)break;
         n=n%m;
         cout<<n<<endl;
         if(n==0)break;
         m/=10;
      }

      if(n%11==0 || n==0)cout<<"YES\n";
      else cout<<"NO"<<endl;
      
      }

   return 0;

}