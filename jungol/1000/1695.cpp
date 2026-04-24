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
void init(){}
void solve(){
    static int board[101][101], vis[101][101];
    int n, dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
    vi result;
    cin >> n;
    for(int i=1; i<=n; i++) {
        string s;
        cin >> s;
        for (int j=1; j<=n; j++) board[i][j] = s[j-1] - '0';
    }
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) {
        if(board[i][j] == 0 || vis[i][j]) continue;
        queue<pii> q;
        q.push(make_pair(i,j));
        vis[i][j] = 1;
        int cnt=0;
        while(!q.empty()) {
            pii current = q.front(); q.pop();
            int x = current.first, y = current.second;
            cnt++;
            for (int d=0; d<4; d++) {
                int nx = x + dx[d], ny = y + dy[d];
                if (nx <= 0 || nx > n || ny <= 0 || ny > n) continue;
                if (board[nx][ny] == 0 || vis[nx][ny]) continue;
                vis[nx][ny] = 1;
                q.push(make_pair(nx, ny));
            }
        }
        result.pb(cnt);
    }
    sort(all(result));
    cout << sz(result) << '\n';
    trav(x, result) cout << x << '\n';
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    init();
    int t=1;
    // cin >> t;
    while(t--)solve();
}