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
    
    int t;
    cin>>t;
    int test=t;
    while(t--)
    {
     int n;
     cin>>n;
     ll diamond_shap[2*n][n+1];

     for(int i=0; i<2*n; i++)
     {
          for(int j=0; j<=n; j++)diamond_shap[i][j]=-1;
               
     }


     cin>>diamond_shap[0][1];
     for(int i=1; i<n; i++)
     {
          for (int j=1; j<=(i+1); j++)
          {
               cin>>diamond_shap[i][j];
               diamond_shap[i][j]+=max(diamond_shap[i-1][j-1],diamond_shap[i-1][j]);
          }
     }
     int tmp=1;
     for(int i=n; i<2*n-1; i++)
     {
          for(int j=tmp+1; j<=n; j++)
          {
               cin>>diamond_shap[i][j];
               diamond_shap[i][j]+=max(diamond_shap[i-1][j-1],diamond_shap[i-1][j]);
          }
          //tmp2--;
          tmp++;
     }

     cout<<"Case "<<test-t<<": "<<diamond_shap[(2*n)-2][n]<<endl;

    }
 
   
}