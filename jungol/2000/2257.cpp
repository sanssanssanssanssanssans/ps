#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using pii = pair<int,int>;

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin); 
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        sum += x * x;
    }
    cout << sum % 10;
}