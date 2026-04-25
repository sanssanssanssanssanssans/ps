#include <bits/stdc++.h>
using namespace std;
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

void solve() {
    int n,k,x;
    vi arr;
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> x;
        arr.pb(x);
    }
    int sum = accumulate(arr.begin(), arr.begin() + k, 0), result = sum;
    for (int i=k; i<n; i++) {
        sum += arr[i];
        sum -= arr[i-k];
        result = max(result, sum);
    } 
    cout << result;
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}