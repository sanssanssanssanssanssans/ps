#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define trav(x, v) for(auto&x : v)
using pii = pair<int,int>;
const float pi = acos(-1);

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1 || n == 2) {
            cout << -1 << '\n';
            continue;
        }
        if (n % 3 == 0) {
            cout << n / 3 << '\n';
            continue;
        }
        if (n % 3 == 1) {
            if (n == 4) cout << - 1 << '\n';
            else cout << n / 3 - 1 << '\n';
            continue;
        }
        if (n % 3 == 2) {
            cout << n / 3 << '\n';
            continue;
        }
    }
}