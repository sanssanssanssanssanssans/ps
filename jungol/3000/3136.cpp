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

void solve() {
    int n,m;
    static int arr[1010][1010], sum[1010][1010];
    cin >> n;
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> arr[i][j];
    for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) sum[i][j] = arr[i-1][j-1] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
    int q;
    cin >> q;
    while(q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x2][y2] - sum[x1-1][y2] - sum[x2][y1-1] + sum[x1-1][y1-1] << '\n';
    }   
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}