#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using pii = pair<int,int>;

int n, m, idg[1010], res[1010];
vector<int> adj[1010];
queue<int> q;

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin); 
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int k, p, c;
        cin >> k;
        if (k == 0) continue;
        cin >> p;
        for (int i = 2; i <= k; i++) {
            cin >> c;
            idg[c]++;
            adj[p].push_back(c);
            p = c;
        }
    }
    for (int i = 1; i <= n; i++) if (idg[i] == 0) q.push(i);
    for (int i = 1; i <= n; i++) {
        if (q.empty()) {
            cout << 0;
            return 0;
        }
        int now = q.front(); q.pop();
        res[i] = now;
        for (auto& nxt : adj[now]) if (--idg[nxt] == 0) q.push(nxt);
    }
    for (int i = 1; i <= n; i++) cout << res[i] << ' ';
}