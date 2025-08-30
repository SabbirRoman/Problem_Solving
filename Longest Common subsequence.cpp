    /**
     *    author:  Roman_Emper0r
     *    created: 24th_Jan_2023
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long
    #define lpr pair<long long int,long long int>
    #define S second
    #define F first
    #define pb push_back
    #define nl '\n'

    void lcs(string s1, string s2)
    {
        ll n=s1.size(),ans=0;

        ll dp[n+1][n+1],start=0;

        for(int i=0; i<=n; i++) dp[i][0]=0;

        for(int i=0; i<=n; i++) dp[0][i]=0;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else dp[i][j]=0;
               if(ans<dp[i][j])
               {
                start=j-1;
                ans=dp[i][j];
               }
            }
        }
        string s3;
        for(int j=start; ans>0; j--)s3+=s2[j],ans--;

            cout<<s3<<endl;
       //return s3;

    }
    
    void solve(){
      
      string s1,s2;

      cin>>s1;
     
      for(int i=s1.size()-1; i>=0; i--) s2+=s1[i];
        
      lcs(s1,s2);
     


      
    }
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin) ;
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
           //cin>>t ;
           
        
        
           while(t--){
                
               solve() ;
           }
           return 0 ;

    }


