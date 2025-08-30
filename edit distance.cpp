/**
 *    author:  Roman_Emper0r
 *    created: 05-09-2023  00:33:30
**/
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
#define          sz(a)               (int)a.size()
#define lpr pair<long long int,long long int>
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define ii pair<int, int>


int minDistance(string word1, string word2) {
        int n=word1.size(), m=word2.size();
        int dp[n+1][m+1];

        for(int i=0; i<=n; i++) dp[i][0]=i;
        for(int i=0; i<=m; i++) dp[0][i]=i;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(word1[i]==word2[j])
                {
                    dp[i+1][j+1]= dp[i][j];
                }
                else
                {
                    dp[i+1][j+1] =min({dp[i+1][j], dp[i][j+1], dp[i][j]})+1;
                }
            }
        }
        return dp[n][m];
    }
void solve(){
string word1, word2;
cin>>word1>>word2;

cout<<minDistance(word1,word2)<<endl;
 
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


