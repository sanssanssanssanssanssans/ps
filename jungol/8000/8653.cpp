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

void solve(){
    int n, q, h, x;
    cin >> n >> q;
    vi v;
    for (int i=1; i<=n; i++) {
        cin >> x;
        v.pb(x);
    }
    int peak = max_element(all(v)) - v.begin();
    while(q--) {
        cin >> x;
        if (v[peak] == x) {
            cout << "T\n";
            continue;
        } 
        if (binary_search(v.begin(), v.begin() + peak + 1, x)) {
            cout << "L\n";
            continue;
        }
        auto iterator = lower_bound(v.begin() + peak + 1, v.end(), x, greater<int>());
        if (iterator != v.end() && *iterator == x) cout << "R\n";
        else cout << "N\n";
    }
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}