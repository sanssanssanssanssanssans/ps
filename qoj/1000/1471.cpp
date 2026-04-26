#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define float long double
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define trav(x, v) for(auto&x : v)
using pii = pair<int,int>;
using vi = vector<int>;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
const float pi = acos(-1);
int tc = 1;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void naive() {}
void stress() {}

auto phi = [](int n) -> int {
    int ret = n;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0) n /= p;
            ret -= ret / p;
        }
    }
    if (n > 1) ret -= ret / n;
    return ret;
};

void solve() {
    int n, dp[1010];
    dp[1] = 3;
    for (int i=2; i<=1000; i++)  {
        int cnt = phi(i);
        dp[i] = dp[i-1] + 2 * cnt;
    }
    cin >> n;
    cout << tc << ' ' << n << ' ' << dp[n] << '\n';
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    cin >> t;
    while(t--)solve(), tc++;
}