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
void init(){}
void solve(){
    int ia,ib,ic;
    string x;
    cin >> ia >> ib >> ic >> x;
    vi v = {ia, ib, ic};
    sort(all(v));
    ia=v[0],ib=v[1],ic=v[2];
    if (x == "ABC") cout << ia << ' ' << ib << ' ' << ic;
    if (x == "ACB") cout << ia << ' ' << ic << ' ' << ib;
    if (x == "BAC") cout << ib << ' ' << ia << ' ' << ic;
    if (x == "BCA") cout << ib << ' ' << ic << ' ' << ia;
    if (x == "CAB") cout << ic << ' ' << ia << ' ' << ib;
    if (x == "CBA") cout << ic << ' ' << ib << ' ' << ia;
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    init();
    int t=1;
    // cin >> t;
    while(t--)solve();
}