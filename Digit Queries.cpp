/**
 *    author:  Roman_Emper0r
 *    created: 08.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
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
   if(n%2==0){
   for(int i=n-2; i>=1; i--)cout<<i<<" ";
   cout<<n-1<<" "<<n<<endl;
}
else
{
   cout<<n-1<<" ";
   for(int i=n-3; i>1; i--)
   {
    cout<<i<<" ";
   }
   cout<<1<<" "<<n-2<<" "<<n<<endl;
}

    }

}


