#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using pii = pair<int,int>;

int n, m, board[1010][1010], dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
queue<pii> q;

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin); 
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
            if (board[i][j] == 1) q.push(make_pair(i, j));
        }
    }    
    
    // bfs
    while (!q.empty()) {
        auto current = q.front(); q.pop();
        for (int d = 0; d < 4; d++) {
            int nx = current.first + dx[d], ny = current.second + dy[d];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (board[nx][ny] != 0) continue;
            board[nx][ny] = board[current.first][current.second] + 1;
            q.push(make_pair(nx, ny));
        }
    }

    int mx = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 0) {
                cout << -1;
                return 0;
            }
            mx = max(mx, board[i][j] - 1);
        }
    }
    cout << mx;
}