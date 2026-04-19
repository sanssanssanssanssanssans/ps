#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main() {
    fastio;

    int n;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        x = max(x, 0);
        v.push_back(x);
    }
    sort(all(v));
    cout << v[n - 1] + v[n - 2];
    
}