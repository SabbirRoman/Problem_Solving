#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;

int func(int row, int col, vector<string>& v, vector<pair<int, int>>& indices) {
    if (row < 0 || row >= n || col < 0 || col >= m || v[row][col] != '?') {
        return 0;
    }

    indices.push_back({row, col});
    if (row == 0 || col == 0 || row == n - 1 || col == m - 1) {
        if (!func(row + 1, col, v, indices) &&
            !func(row - 1, col, v, indices) &&
            !func(row, col - 1, v, indices) &&
            !func(row, col + 1, v, indices)) {
            return 0;
        }
    }

    char ch;
    unordered_map<pair<int, int>, int> mp;
    while (true) {
        indices.push_back({row, col});
        if (row < 0 || row >= n || col < 0 || col >= m) {
            ch = '0';
            break;
        }
        if (v[row][col] == '?') {
            ch = '1';
            break;
        } else if (v[row][col] == 'U') row--;
        else if (v[row][col] == 'D') row++;
        else if (v[row][col] == 'L') col--;
        else if (v[row][col] == 'R') col++;
        else if (v[row][col] == '0') {
            ch = '0';
            break;
        } else if (v[row][col] == '1') {
            ch = '1';
            break;
        }

        mp[{row, col}]++;
        if (mp[{row, col}] > 1) {
            ch = '1';
            break;
        }
    }

    for (auto& p : indices) {
        row = p.first;
        col = p.second;
        if (row < 0 || row >= n || col < 0 || col >= m) break;
        v[row][col] = ch;
    }

    indices.clear();
    return 0;
}

void solve_it() {
    cin >> n >> m;
    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    vector<pair<int, int>> indices;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            if (v[row][col] == '1') {
                ans++;
                continue;
            } else if (v[row][col] == '0') continue;

            ans += func(row, col, v, indices);
        }
    }

    cout << ans << endl;
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
