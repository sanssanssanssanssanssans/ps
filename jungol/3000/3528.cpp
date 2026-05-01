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

string s;
int n, answer = 0, cnt[26];

auto backtracking = [](auto&self, int pre, int used){
    if (used == n) {
        answer++;
        return;
    }
    for (int i = 0; i < 26; i++) {
        if (cnt[i] == 0) continue;
        if (i == pre) continue;
        cnt[i]--;
        self(self, i, used + 1);
        cnt[i]++;
    }
};

auto solve = []() {
    cin >> s;
    n = sz(s);
    trav(ch, s) cnt[ch - 'a']++;
    int mx = *max_element(cnt, cnt + 26);
    if (mx > (n + 1) / 2) {
        cout << 0 << '\n';
        return;
    }
    backtracking(backtracking, -1, 0);
    cout << answer;
};

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    //cin >> t;
    while(t--)solve(), tc++;
}