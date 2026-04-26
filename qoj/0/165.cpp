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

auto solve = []() {
    int n,result = 0;
    string s;
    cin >> n >> s;
    s = ' ' + s;
    for (int ph=0; ph<2; ph++) {
        vi p[2], c0(n+1), c1(n+1);
        for (int i=1; i<=n; i++) {
            p[s[i]=='>'].pb(i);
            c0[i]=c0[i-1]+(s[i]=='<');
            c1[i]=c1[i-1]+(s[i]=='>');
        }
        for (int i=1; i<=n; i++) {
            if (s[i] == '<') {
                int lc = c1[i-1], rc = c0[n] - c0[i];
                if (lc <= rc) {
                    auto &v = p[0];
                    int x = lower_bound(all(v), i+1) - v.begin();
                    result = max(result, v[x + lc - 1]);
                } else {
                    auto &v = p[1];
                    int x = upper_bound(all(v), i-1) - v.begin() - 1;
                    result = max(result, n - v[x - (rc + 1)  + 1] + 1);
                }
            }
        }
        reverse(s.begin() + 1, s.end());
        for (int i=1; i<=n; i++) s[i] ^= ('<' ^ '>');
    }
    cout << result;
};

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    //cin >> t;
    while(t--)solve(), tc++;
}