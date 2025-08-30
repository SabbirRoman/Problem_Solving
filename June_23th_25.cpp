#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false); // Optimize C++ standard streams
    cin.tie(NULL); // Untie cin from cout

    ll test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        std::vector<int> v(n);

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        // The array is already sorted in the input based on constraints: 1 <= a1 <= a2 <= ... <= an
        // If not guaranteed, sort it here: sort(v.begin(), v.end());

        ll ans = 0;

        // Iterate through all possible i
        for (int i = 0; i < n; ++i) {
            // Iterate through all possible j > i
            for (int j = i + 1; j < n; ++j) {
                // Calculate common sum for conditions
                ll sum_ij = v[i] + v[j];

                // --- Handle Case 1: k < n-1 ---
                // In this range, M_uncolored is always v[n-1] (if n > 0)
                // Conditions: v[k] < sum_ij AND v[i] + v[j] + v[k] > v[n-1]
                // Which means: v[k] < sum_ij AND v[k] > v[n-1] - sum_ij

                // Ensure n-1 is a valid index and there's a range for k
                if (n - 1 > j + 1) { // Checks if there's at least one k such that j+1 <= k <= n-2
                    ll lower_bound_k_val = v[n-1] - sum_ij;
                    
                    // lower_bound_k_val + 1: We need v[k] > lower_bound_k_val
                    auto it_low = std::upper_bound(v.begin() + j + 1, v.begin() + n - 1, lower_bound_k_val);
                    // sum_ij - 1: We need v[k] < sum_ij
                    auto it_high = std::lower_bound(v.begin() + j + 1, v.begin() + n - 1, sum_ij);

                    ans += std::distance(it_low, it_high);
                }

                // --- Handle Case 2: k = n-1 ---
                // This case is for the largest element being chosen as the third red element.
                // It's only possible if n-1 is a valid index greater than j.
                if (n - 1 > j) { // Check if k=n-1 is a valid choice (n-1 > j)
                    int k_idx = n - 1; // k is the last element
                    ll current_k_val = v[k_idx];

                    // Condition 1: v[i] + v[j] > v[k]
                    bool cond1 = (sum_ij > current_k_val);

                    // Condition 2: Find M_uncolored for this specific triplet (i, j, n-1)
                    ll max_uncolored_element_val = 0;
                    if (n > 3) { // If n <= 3, all elements are chosen, M_uncolored is 0.
                        int temp_max_idx = n - 1; // Start from largest possible index
                        
                        // Exclude k_idx
                        temp_max_idx--; // now points to n-2

                        // Exclude j
                        if (temp_max_idx == j) temp_max_idx--; // now points to n-3 if j was n-2

                        // Exclude i
                        if (temp_max_idx == i) temp_max_idx--; // now points to n-4 if i was n-3

                        if (temp_max_idx >= 0) { // Ensure index is valid
                            max_uncolored_element_val = v[temp_max_idx];
                        }
                    } else if (n == 3) {
                        // All elements are chosen, M_uncolored remains 0 (vacuously true for C2)
                    }

                    // Check Condition 2: v[i] + v[j] + v[k] > M_uncolored
                    bool cond2 = (sum_ij + current_k_val > max_uncolored_element_val);

                    if (cond1 && cond2) {
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}