/**
 *    author:  Roman_Emper0r
 *    created: 12.06.2022      
**/
#include<bits/stdc++.h>
int const MAXN = 1e5 + 5;
int cnt[MAXN];
using namespace std;
#define ll long long




int main() {
	 #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w",stdout);
#endif 
    
   int t=1;
   cin>>t;
   int test=t;
   while(t--){
  	  
    int n;
    cin>>n;
    ll arr[n+1][3];
    arr[0][0]=0;
    arr[0][1]=0;
    arr[0][2]=0;

    for(int i=1; i<=n; i++)
    {
      int a,b,c;
      cin>>a>>b>>c;
      arr[i][0]=a+min(arr[i-1][1],arr[i-1][2]);

      arr[i][1]=b+min(arr[i-1][0],arr[i-1][2]);
      
      arr[i][2]=c+min(arr[i-1][1],arr[i-1][0]);
      

    }
    cout<<"Case "<<test-t<<": "<<min({arr[n][0],arr[n][1],arr[n][2]})<<endl;
   
     
     
}
}
