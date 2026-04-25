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


void solve(){
    int n, t, x;
    vi v;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x;
        v.pb(x);
    }
    cin >>t ;
    auto check = [&](int mid) -> bool {
        int sum = 0;
        for (int i=0; i<n; i++) {
            if (v[i] <= mid) sum += v[i];
            else sum += mid;
        }
        if (sum < t) return true;
        return false;
    };
    int low = 0, high = *max_element(all(v));
    while (low < high) {
        int mid = (low + high + 1) / 2;
        if (check(mid)) low = mid;
        else high = mid - 1;
    }
    cout << low;
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}