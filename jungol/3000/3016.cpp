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

int n;

void solve(){
    cin >> n;
    for (int h=1; h<=9; h++) {
        for(int e=0; e<=9; e++) {
            if (h == e) continue;
            for (int l=0; l<=9; l++) {
                if (h == l || e == l) continue;
                for(int o=0; o<=9; o++) {
                    if (h == o || e == o || l == o) continue;
                    for(int w=1; w<=9; w++) {
                        if(h == w || e == w || l == w || o == w) continue;
                        for(int r=0; r<=9; r++) {
                            if (h == r || e == r || l == r || o == r || w == r) continue;
                            for (int d=0; d<=9; d++) {
                                if (h == d || e == d || l == d || o == d || w == d || r == d) continue;
                                if ((h * 10000 + e * 1000 + l * 100 + l * 10 + o) + (w * 10000 + o * 1000 + r * 100 + l * 10 + d) == n) {
                                    cout << "  " << h * 10000 + e * 1000 + l * 100 + l * 10 + o << '\n';
                                    cout << "+ " << w * 10000 + o * 1000 + r * 100 + l * 10 + d << '\n';
                                    cout << "-------" << '\n';
                                    if (n < 99999) {
                                        cout << "  " << n << '\n';
                                    } else {
                                        cout << " " << n << '\n';
                                    }
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "No Answer";
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while(t--)solve();
}