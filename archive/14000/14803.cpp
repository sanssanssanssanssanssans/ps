#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

ll t;

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    while (t--) {
        // n = a + b;
        // a == b이여야함
        // bruteforce는 안됨 long long이라서 
        ll n;
        cin >> n;
        // n == odd,
        // n = x + y인데, x == y인 경우가 있나?
        // 없음
        if (n & 1) cout << "No\n";
        else cout << "Yes\n" << n / 2 << ' ' << n / 2 << '\n';
    }
}