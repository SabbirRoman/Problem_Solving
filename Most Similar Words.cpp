/**
 *    author:  Roman_Emper0r
 *    created: 10.05.2022      
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
        int n,m; 
        cin>>n>>m;
        string s[n];
        for(int i=0; i<n; i++)cin>>s[i];
            int ans=1e6;
        for(int i=0; i<n-1; i++)
        {
            
            for(int j=i+1; j<n; j++)
            {
                int tmp=0;
                for(int k=0; k<m; k++)tmp+=abs(s[i][k]-s[j][k]);
                    ans=min(ans,tmp);
            }
        
        }
       cout<<ans<<endl;

    }
}