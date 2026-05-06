#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using pii = pair<int,int>;

int n, m, x, result = 0;
vector<int> v;

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin); 
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (v[i] + v[j] + v[k] <= m) {
                    result = max(result, v[i] + v[j] + v[k]);
                }
            }
        }   
    }
    cout << result;
}