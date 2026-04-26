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

struct add_segment_tree {
    int n;
    vector<int> tree;
    add_segment_tree(int n) : n(n), tree(2 * n, 0) {}

    void build(vector<int>& arr) {
        for(int i=0; i<n; i++) tree[n + i] = arr[i];
        for(int i=n-1; i>0; i--) tree[i] = tree[i << 1] + tree[i << 1| 1];
    }

    void update(int idx, int val) {
        idx += n;
        tree[idx] = val;
        while (idx > 1) {
            idx >>= 1;
            tree[idx] = tree[idx << 1] + tree[idx << 1 | 1];
        }
    }
    
    int query(int l, int r) {
        int result = 0;
        for (l += n, r += n; l<=r; l>>=1, r>>=1) {
            if(l&1) result += tree[l++];
            if(!(r&1)) result += tree[r--];
        }
        return result;
    }
};