#include <bits/stdc++.h>
using namespace std;

int main() {
    //  #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, n;
    cin >> x >> n;
    
    set<int> positions = {0, x}; // Store positions including endpoints
    multiset<int> lengths = {x}; // Store segment lengths, initially [0,x]
    
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        
        // Find the segment that p splits
        auto it = positions.lower_bound(p);
        int right = *it; // Right endpoint of the segment
        int left = *prev(it); // Left endpoint of the segment
        
        // Remove the old segment length
        lengths.erase(lengths.find(right - left));
        
        // Insert new position and segment lengths
        positions.insert(p);
        lengths.insert(p - left);
        lengths.insert(right - p);
        
        // Output the largest segment length
        cout << *lengths.rbegin() << " ";
    }
    
    cout << "\n";
    return 0;
}