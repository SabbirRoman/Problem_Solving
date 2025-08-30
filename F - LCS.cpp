/**
 *    author:  Roman_Emper0r
 *    created: 26.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long





int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif


        string s,t;
        cin>>s>>t;

        int n=s.size(), m= t.size();

        int a[n+1][m+1];

        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if(i==0 || j==0) a[i][j]= 0;
                else if(s[i-1]==t[j-1])
                {
                    a[i][j] = a[i-1][j-1]+1;
                }
                else
                {
                    a[i][j] = max(a[i-1][j], a[i][j-1]);
                }
            }
        }

            string ans;

         while(n>0&m>0)
         {
                if(s[n-1]==t[m-1])
                {
                    ans+=t[m-1];
                    n--;
                    m--;
                }
                else if(a[n-1][m]>a[n][m-1])
                {
                    n--;
                }
                else m--;
         }
          reverse(ans.begin(), ans.end());
         cout<<ans<<endl;
    
    
    
   

   
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


