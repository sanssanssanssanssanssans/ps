#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using pii = pair<int,int>;

int tree[4040404], lazy[4040404];

auto propagate = [](int n, int s, int e) -> void {
    tree[n] += lazy[n] * (e - s + 1);
    if (s < e) {
        lazy[n * 2] += lazy[n];
        lazy[n * 2 + 1] += lazy[n];
    }
    lazy[n] = 0;
};

auto query = [](auto&self, int n, int s, int e, int x, int y) -> int {
    propagate(n, s, e);
    if (e < x || y < s) return 0;
    if (x <= s && e <= y) return tree[n];
    int mid = (s + e) / 2;
    return self(self, n * 2, s, mid, x, y) + self(self, n * 2 + 1, mid + 1, e, x, y);
};

auto update = [](auto&self, int n, int s, int e, int x, int y, int val) -> void {
    propagate(n, s, e);
    if (e < x || y < s) return;
    if (x <= s && e <= y) {
        lazy[n] += val;
        propagate(n, s, e);
        return;
    }
    int mid = (s + e) / 2;
    self(self, n * 2, s, mid, x, y, val);
    self(self, n * 2 + 1, mid + 1, e, x, y, val);
    tree[n] = tree[n * 2] + tree[n * 2 + 1];
};

int n, q, x, cmd, a, b, c;

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin); 
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        update(update, 1, 1, n, i, i, x);
    }
    cin >> q;
    while (q--) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> a >> b >> c;
            update(update, 1, 1, n, a, b, c);
        } else {
            cin >> a >> b;
            cout << query(query, 1, 1, n, a, b) << '\n';
        }
    }
}