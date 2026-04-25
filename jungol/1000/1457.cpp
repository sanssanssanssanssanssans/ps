#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float long double
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define trav(x, v) for(auto&x : v)
using pii = pair<int,int>;
using vi = vector<int>;
const float pi = acos(-1);
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void naive() {}
void stress() {}

int vis[102][102], adj[102][102], m, n, k, dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1}, sx, sy, ex, ey;

void solve(){
    cin >> m >> n >> k;
    while (k--) {
        cin >> sx >> sy >> ex >> ey;
        for (int i=sx; i<ex; i++) for(int j=sy; j<ey; j++) adj[i][j] = 1;
    }
    vi result;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (adj[i][j] == 1) continue;
            if (vis[i][j] == 1) continue;
            queue<pii> q;
            int cnt = 0;
            q.push(make_pair(i,j));
            vis[i][j] = 1;
            while (!q.empty()) {
                cnt++;
                pii current = q.front(); q.pop();
                int x = current.first, y = current.second;
                for (int d=0; d<4; d++) {
                    int nx = x + dx[d], ny = y + dy[d];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (adj[nx][ny] == 1) continue;
                    if (vis[nx][ny] == 1) continue;
                    q.push(make_pair(nx, ny));
                    vis[nx][ny] = 1;
                }
            }
            result.pb(cnt);
        }
    }
    sort(all(result));
    cout << sz(result) << '\n';
    trav(x, result) cout << x << ' ';
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}