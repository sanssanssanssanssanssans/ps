#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int n, x;
vector<int> v;

int main() { 
    cin >> n;
    for (int i = 0; i < n; i++){ 
        cin >> x;
        v.push_back(x);
    }
    auto f=[&](int x){return x == v[0];};
    if (all_of(all(v), f))cout << "yes";
    else if(all_of(v.begin(), v.end() - 1, f)) {
        if (v.back() % v.front() == 0)cout << "yes";
        else cout << "no";
    } else cout << "no";
}