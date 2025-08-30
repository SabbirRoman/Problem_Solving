/**
 *    author:  Roman_Emper0r
 *    created: 31.05.2022      
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
    


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int t;
   cin>>t;
   while(t--){
  	
    int n,r,b;
    cin>>n>>r>>b;

    int  tmp= r/(b+1), var=r%(b+1);

    for(int i=0; i<b; i++)
    {
     for(int j=0; j<tmp; j++)cout<<"R";
      if(var)
      {
        cout<<"R";
        var--;
      }
      cout<<"B";
    }
    for(int j=0; j<tmp; j++)cout<<"R";
    cout<<endl;






   }
}