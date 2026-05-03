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
    stack<int> stk;
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.pb(x);
    }
    vi answer;
    for (int i = n - 1; i >= 0; i--){
        while (!stk.empty() && arr[stk.top()] <= arr[i]) stk.pop();
        if (!stk.empty()) answer.pb(stk.top() + 1);
        else answer.pb(0);
        stk.push(i);
    }
    reverse(all(answer));
    trav(x, answer) cout << x << '\n';
};

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    //cin >> t;
    while(t--)solve(), tc++;
}