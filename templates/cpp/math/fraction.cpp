#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

struct Fraction {
    ll numeric, denomator;

    Fraction(ll n = 0, ll d = 1) {
        if (d < 0) n = -n, d = -d;
        ll g = gcd(abs(n), d);
        numeric = n / g;
        denomator = d / g;
    }

    bool operator < (const Fraction& other) const {
        return numeric * other.denomator < other.numeric * denomator;
    }

    void print() const {
        cout << numeric << "/" << denomator;
    }
};