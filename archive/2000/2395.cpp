#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

auto euler_phi = [](ll x) -> ll {
    ll result = x;
    for(int i = 2; i * i <= x; i++) {
        if (x % i == 0){
            result = result / i * (i - 1);
            while(x % i == 0) x /= i;
        }
    }
    if (x > 1) result = result / x * (x - 1);
    return result;
};

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

const int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    // euler_phi function으로 대충 n - 서로소인수를 구하고,
    ll n;
    cin >> n;
    // 분수로 나타내기?
    // brute forec << X
    // 상수 커팅 잘하면 될거 같은데
    ll k = 1, prod = 1;
    for (auto &prime : primes) {
        if (k > n / prime) break;
        k *= prime;
        prod *= (prime - 1);
    }
    Fraction(k - prod, k).print();
}