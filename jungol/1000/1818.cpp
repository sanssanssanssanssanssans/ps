#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using pii = pair<int,int>;

int n, m, a, b, vis[6974];
vector<int> graph[6974];

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    auto dfs = [&](auto&self, int current) -> void {
        vis[current] = 1l;
        for (auto i : graph[current]) if (!vis[i]) self(self, i);
    };
    dfs(dfs, 1);
    int sum = 0;
    for (int i = 2; i <= n; i++) sum += vis[i];
    cout << sum;
}