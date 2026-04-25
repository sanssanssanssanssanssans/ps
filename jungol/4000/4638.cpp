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
const float pi = acos(-1);
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void naive() {}
void stress() {}

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

void solve() {
    ordered_set s;
    int q;
    cin >> q;
    while (q--) {
        char x;
        int cmd;
        cin >> x >> cmd;
        if (x =='i') s.insert(cmd);
        else if (x=='r') s.erase(cmd);
        else if (x=='f') {
            if(s.find(cmd) == s.end()) cout << "NOPE\n";
            else if (sz(s) == 1) cout << "UNIQUE\n";
            else {
                auto it = s.find(cmd);
                int result = 0;
                if (it == s.begin()) result = *next(it);
                else if (next(it) == s.end()) result = *prev(it);
                else {
                    int l = *prev(it), r = *next(it);
                    if (abs(cmd - l) <= abs(r - cmd)) result = l;
                    else result = r;
                }
                cout << result << '\n';
            }
        }
    }

}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}