#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define trav(x, v) for(auto&x : v)
using pii = pair<int,int>;
using vi = vector<int>;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void naive() {}
void stress() {}

int n;
const int mod = 42;
void init(){}
void solve(){
    int t=10;
    while(t--){
        cin >> n;
        cout << n % mod << '\n';
    }
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    init();
    int t=1;
    // cin >> t;
    while(t--)solve();
}