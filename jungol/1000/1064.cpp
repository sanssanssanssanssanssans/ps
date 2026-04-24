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
void init(){
    cout << fixed << setprecision(4);
}
void solve(){
   float r;
   cin >> r;
   cout << r * r * pi << '\n' << r * r * 2;
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    init();
    int t=1;
    // cin >> t;
    while(t--)solve();
}