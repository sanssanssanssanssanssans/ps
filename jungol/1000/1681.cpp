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

int n, arr[102][102], chk[102], result = 123467890;

void solve(){
    cin >> n;
    for (int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> arr[i][j];
    auto backtracking = [&](auto&self, int now, int cnt, int cost) -> void {
        if (cost >= result) return;
        if (cnt == n) {
            if (arr[now][0]!=0) result = min(result, cost + arr[now][0]);
            return;
        }
        for (int i=0; i<n; i++) {
            if (!chk[i] && arr[now][i] != 0) {
                chk[i] = 1;
                self(self, i, cnt + 1, cost + arr[now][i]);
                chk[i] = 0;
            }
        }
    };
    chk[0]=1;
    backtracking(backtracking, 0, 1, 0);
    cout << result;
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}