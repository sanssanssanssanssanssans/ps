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
    set<int> s;
    int q;
    cin >> q;
    while (q--) {
        char x;
        int cmd;
        cin >> x >> cmd;
        if (x =='i') s.insert(cmd);
        else if (x=='r') s.erase(cmd);
    }
    trav(x, s) cout << x << ' ';
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}