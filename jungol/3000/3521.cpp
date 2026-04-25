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
    int a,b,c,d,e,n,cnt = 0;;
    cin >> a >> b >> c >> d >> e >> n;
    while (e > 0 && n - 16 >= 0) n -= 16, e -= 1, cnt++;
    while (d > 0 && n - 8 >= 0) n -= 8, d -= 1, cnt++;
    while (c > 0 && n - 4 >= 0) n -= 4, c -= 1, cnt++;
    while (b > 0 && n - 2 >= 0) n -= 2, b -= 1, cnt++;
    while (a > 0 && n - 1 >= 0) n -= 1, a -= 1, cnt++;
    if (n == 0) cout << cnt;
    else cout << "impossible";
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}