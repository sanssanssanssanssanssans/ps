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

struct fenwicktree {
    int n;
    vi bit;
    fenwicktree(int n) : n(n), bit(n + 1, 0) {}
    void add(int  i, int v) {
        for (; i<=n; i+=i&-i) bit[i] += v;
    }
    int sum(int i) {
        int s = 0;
        for (; i>0; i-=i&-i) s += bit[i];
        return s;
    }
};

auto solve = []() {
    int n, q;
    cin >> n >> q;
    fenwicktree tree(101010);
    vi score(n+1);
    for (int i=1; i<=n; i++) {
        cin >> score[i];
        tree.add(score[i], 1);
    }
    while(q--) {
        int cmd,x,y;
        cin >> cmd;
        if (cmd == 1) {
            cin >> x;
            int sc = score[x], high = tree.sum(100000) - tree.sum(sc);
            cout << high + 1 << '\n';
        } else {
            cin >> x >> y;
            tree.add(score[x], -1);
            score[x] = y;
            tree.add(score[x], 1);
        }
    }
};

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    //cin >> t;
    while(t--)solve(), tc++;
}