#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;
    int test = t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        

        vector<vector<long long>> dp(n + 1, vector<long long>(n * 100 + 1, 0)); // dp[size][sum]
        dp[0][0] = 1;
        
        for (int i = 0; i < n; i++) {
            
            for (int size = n - 1; size >= 0; size--) {
                for (int sum = n * 100; sum >= 0; sum--) {
                    if (dp[size][sum]) {
                        dp[size + 1][sum + arr[i]] += dp[size][sum];
                        dp[size + 1][sum + arr[i]] %= mod;
                    }
                }
            }
        }

        long long ans = 0;
        for (int size = 1; size <= n; size++) {
            for (int sum = 0; sum <= n * 100; sum++) {
                if (sum % size == 0) {
                    ans+= dp[size][sum];
                    ans%= mod;
                }
            }
        }

        
        cout << "Case " << test-t << ": " << ans << endl;
    }
    
    return 0;
}
