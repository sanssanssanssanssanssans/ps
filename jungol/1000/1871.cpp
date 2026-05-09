#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using pii = pair<int,int>;

int n, arr[202];
vector<int> lis;

signed main() { 
    #ifdef LOCAL
        freopen("input.txt", "r", stdin); 
    #endif
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    lis.push_back(arr[0]);
    for (int i = 1; i < n; i++) {
        if(lis.back() < arr[i]) {
            lis.push_back(arr[i]);
            continue;
        }
        auto it = lower_bound(all(lis), arr[i]);
        *it = arr[i];
    }
    cout << n - sz(lis);
}