#include <bits/stdc++.h>
using namespace std;

int main() {
     #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        

    long long hashmat, opponent;
    
    // Read input until EOF
    while (cin >> hashmat >> opponent) {
        // Calculate and print absolute difference
        cout << abs(hashmat - opponent) << endl;
    }
    
    return 0;
}