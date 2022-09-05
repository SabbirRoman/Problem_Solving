#include<bits/stdc++.h>
#define ll long long
using namespace std;
void tower_of_hanoi(int n, int a, int b, int c){
if(n==1){
   cout<<a<<" "<<c<<endl;
   return;
}
tower_of_hanoi(n-1,a,c,b);

cout<<a<<" "<<c<<endl;
tower_of_hanoi(n-1,b,a,c);

}

int main(){
   #ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w",stdout);
#endif 
   int n;
   cin>>n;
   int ans=1;
   for(int i=0; i<n; i++)ans*=2;
      
      cout<<ans-1<<endl;
   int a=1,b=2,c=3;
   tower_of_hanoi(n,a,b,c);

}