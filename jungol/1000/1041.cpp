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
    auto check = [&](int x)->bool {
        if ((int)sqrt(x)*(int)sqrt(x)==x) return true;
        return false;
    };
    int n,m;
    vi v;
    cin >> n >> m;
    for (int i=n; i<=m; i++) if (check(i)) v.pb(i);
    if (sz(v) == 0)  cout << 0;
    else trav(x, v) cout << x << ' ';
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}