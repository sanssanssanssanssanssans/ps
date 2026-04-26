#include <bits/stdc++.h>
using namespace std;
struct max_segment_tree {
    int n;
    vector<int> tree;
    max_segment_tree(int n) : n(n), tree(2 * n, LLONG_MIN) {}

    void build(vector<int>& arr) {
        for(int i=0; i<n; i++) tree[n + i] = arr[i];
        for(int i=n-1; i>0; i--) tree[i] = max(tree[i << 1], tree[i << 1| 1]);
    }
    
    int query(int l, int r) {
        int result = LLONG_MIN;
        for (l += n, r += n; l<=r; l>>=1, r>>=1) {
            if(l&1) result = max(result, tree[l++]);
            if(!(r&1)) result = max(result, tree[r--]);
        }
        return result;
    }
};