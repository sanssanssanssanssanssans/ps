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

void init(){
    cout << fixed << setprecision(3);
}

void solve(){
    int n;
    vector<float> v;
    cin >> n;
    for (int i=1; i<=n; i++) {
        float x;
        cin >> x;
        v.pb(x);
    }
    vector<float> dp(n);
    dp[0] = v[0];
    float ret = dp[0];
    for(int i=1; i<n; i++) {
        dp[i] = max(v[i], dp[i-1] * v[i]);
        ret = max(ret, dp[i]);
    }
    cout << ret;
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    init();
    int t=1;
    // cin >> t;
    while(t--)solve();
}