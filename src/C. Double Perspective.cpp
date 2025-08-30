#include <bits/stdc++.h>
using namespace std;

const int MAXN = 6005;

vector<int> graph[MAXN];
int parent[MAXN];

int find(int u) {
    if (u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}

void unite(int u, int v) {
    parent[find(u)] = find(v);
}

bool checkCycle(int u, int p, int depth, vector<bool>& visited, int start) {
    visited[u] = true;
    for (int v : graph[u]) {
        if (v == p) continue;
        if (visited[v]) {
            if (depth >= 2 && v == start) return true;  // cycle length ≥ 3
        } else {
            if (checkCycle(v, u, depth + 1, visited, start)) return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<tuple<int, int, int>> edges;
        for (int i = 1; i <= n; ++i) {
            int a, b;
            cin >> a >> b;
            edges.push_back({b - a, a, b}); // weight, a, b
        }

        // Clear previous graph
        for (int i = 0; i < MAXN; ++i) graph[i].clear();

        // Init DSU
        for (int i = 0; i < MAXN; ++i) parent[i] = i;

        // Sort edges by contribution to f(S') = b - a (descending)
        sort(edges.rbegin(), edges.rend());

        vector<int> result;

        for (int i = 0; i < n; ++i) {
            int len = get<0>(edges[i]);
            int a   = get<1>(edges[i]);
            int b   = get<2>(edges[i]);


            // Temporarily add edge to graph
            graph[a].push_back(b);
            graph[b].push_back(a);

            vector<bool> visited(2 * n + 10, false);
            if (checkCycle(a, -1, 0, visited, a)) {
                // Remove edge
                graph[a].pop_back();
                graph[b].pop_back();
            } else {
                // Accept edge
                result.push_back(i + 1);
                unite(a, b);
            }
        }

        // Output
        cout << result.size() << '\n';
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}
