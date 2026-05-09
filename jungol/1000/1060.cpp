#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using pii = pair<int,int>;

int n, w[102][102], cost[106974], vis[106974], result = 0;

auto prim = [](int start) {
    for (int i = 0; i <= n; i++) cost[i] = 123456789;
    cost[start] = 0;
    for (int i = 1; i <= n; i++) {
        int u = 0, mn = 1234456789;
        for (int j = 1; j <= n; j++) {
            if (vis[j]) continue;
            if (cost[j] < mn) {
                u = j;
                mn = cost[j];
            }
        }
        vis[u] = 1;
        result += mn;
        for (int j = 1; j <= n; j++) {
            if (vis[j]) continue;
            cost[j] = min(cost[j], w[u][j]);
        }
    }
};

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin); 
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) cin >> w[i][j];
    prim(1);
    cout << result;
}