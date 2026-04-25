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

int n, dp[101010];
const int mod = 20100529;

void solve(){
    dp[0] = dp[1] = 1;
    for (int i=2; i<101010; i++) dp[i] = (dp[i-1]  + dp[i-2] * 2) % mod;
    cin >> n;
    cout << dp[n];
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}