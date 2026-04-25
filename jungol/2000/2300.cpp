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
    int n,x;
    vi arr;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x;
        arr.pb(x);
    }
    sort(all(arr));
    int l=0, r=n-1, mn = LLONG_MAX, mnl, mnr;
    while (l<r) {
        int sum = arr[l] + arr[r];
        if (abs(sum) < abs(mn)) {
            mn = sum;
            mnl = arr[l];
            mnr = arr[r];
        }
        if (sum < 0) l++;
        else r--;
    }
    cout << mnl << ' ' << mnr;
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}