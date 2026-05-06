#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define trav(x, v) for(auto&x : v)
using pii = pair<int,int>;
const float pi = acos(-1);

vector<int> graph[101011];
int n, m, dist[101011];

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i  = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    for (int i = 0; i < 101011; i++) dist[i] = 0;
    auto dfs = [&](auto&self, int parent, int current) -> void {
        if (dist[current] > dist[m]) m = current;
        trav(nxt, graph[current]) {
            if (parent != nxt) {
                dist[nxt] = dist[current] + 1;
                self(self, current, nxt);
            }
        }
    };
    dfs(dfs, 0, 1);
    for (int i = 0; i < 101011; i++) dist[i] = 0;
    dfs(dfs, 0, m);
    cout << dist[m];
}