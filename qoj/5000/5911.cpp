#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    cin >> t;
    for(int tc=1; tc<=t; tc++) {
        ll e,r,n;
        cin >> e >> r >> n;
        vector<ll> v;
        for(int i=0; i<n; i++) {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll current = e, result = 0;
        for(int i=0; i<n; i++) {
            ll j = i+1, spend;
            while(j<n && v[j]<=v[i]) j += 1;
            if (j==n) spend = current;
            else {
                ll keep = max(0LL, e-(j-i)*r);
                spend = max(0LL,current-keep);
            }
            result += spend*v[i];
            current = min(e,current-spend+r);
        }
        cout<<"Case #"<<tc<<": "<<result<<'\n';
    }
}