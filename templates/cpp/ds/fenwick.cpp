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