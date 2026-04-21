#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

// 무조건 n을 뒤집는게 이득인거 같은데
ll t;

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        ll b = 1, ret = 0;
        reverse(all(x));
        for (auto &ch : x) {
            auto d = ch - '0';
            ret += d * b;
            b <<= 1;
        }
        cout << ret << '\n';
    }
}