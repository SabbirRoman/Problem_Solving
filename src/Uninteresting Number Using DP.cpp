#include <bits/stdc++.h>
#define ll long long
using namespace std;





void solve_it() {
    string s;
    cin>>s;
    vector<bool> dp(9);
    dp[0]=true;

    for(char ch : s)
    {
        vector<bool> new_dp(9);
        int val = ch-'0';
      
        while(val<=9)
        {
            for(int x=0; x<9; x++)
            {
                if(dp[x])
                {
                    new_dp[(x+val)%9] = true;
                }               
            }
            if(val<=1) break;
            val = val*val;
        }
        // for(int i=0; i<9; i++) cout<<new_dp[i]<<" ";
        //     cout<<endl;
        swap(dp,new_dp);
    }

    if(dp[0])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

    int t;
    cin >> t;
    while (t--) {
        solve_it();
    }
    return 0;
}
