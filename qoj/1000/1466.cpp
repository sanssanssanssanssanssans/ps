#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define float long double
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define trav(x, v) for(auto&x : v)
using pii = pair<int,int>;
using vi = vector<int>;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
const float pi = acos(-1);
int tc = 1;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void naive() {}
void stress() {}

void solve() {
    int n;
    cin >> n;
    int q=0, d=0, ni=0, p=0;
    while (n >= 25) n -= 25, q++;
    while (n >= 10) n -= 10, d++;
    while (n >= 5) n -= 5, ni++;
    while (n >= 1) n -= 1, p++;
    cout << tc << ' ' << q << " QUARTER(S), " << d << " DIME(S), " << ni << " NICKEL(S), " << p << " PENNY(S)" << '\n';
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    cin >> t;
    while(t--)solve(), tc++;
}