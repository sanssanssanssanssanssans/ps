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

auto solve = []() {
    int x;
    cin >> x;
    if (x == 1) {
        cout << 2 << ' ' << - 1;
        return;
    }
    if (x == -1) {
        cout << -2 << ' ' << 1;
        return;
    }
    if (x == -999) {
        cout << -998 << ' ' << -1;
        return;
    }
    cout << 1 << ' ' << x - 1;
};

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    //cin >> t;
    while(t--)solve(), tc++;
}