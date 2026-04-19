#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>

typedef long long ll;
typedef __int128 i128;

#define LIM 1000000000000LL
#define MAXP 1000000
#define MAXPR 80000
#define MAXD 100000
#define MAXR 1100000
#define HSIZE (1 << 21)

typedef struct {
    ll p;
    int e;
} Factor;

typedef struct {
    ll val;
    int b;
    unsigned char p;
} Node;

static int primes[MAXPR];
static int pcnt;
static bool vis[MAXP + 1];

static Factor fac[64];
static int fcnt;

static ll divs[MAXD];
static int dcnt;

static Node rep[MAXR];
static int repcnt;

static int head[HSIZE];
static int nxt[MAXR];

static int t;

static unsigned long long splitmix64(unsigned long long x) {
    x += 0x9e3779b97f4a7c15ULL;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9ULL;
    x = (x ^ (x >> 27)) * 0x94d049bb133111ebULL;
    return x ^ (x >> 31);
}

static int bucket(ll x) {
    return (int)(splitmix64((unsigned long long)x) & (HSIZE - 1));
}

static void sieve() {
    for (int i = 2; i <= MAXP; i++) {
        if (!vis[i]) primes[pcnt++] = i;
        for (int j = 0; j < pcnt; j++) {
            ll x = 1LL * i * primes[j];
            if (x > MAXP) break;
            vis[x] = true;
            if (i % primes[j] == 0) break;
        }
    }
}

static void factorize(ll n) {
    fcnt = 0;
    for (int i = 0; i < pcnt && 1LL * primes[i] * primes[i] <= n; i++) {
        int p = primes[i];
        if (n % p == 0) {
            int e = 0;
            while (n % p == 0) {
                n /= p;
                e++;
            }
            fac[fcnt++] = (Factor){p, e};
        }
    }
    if (n > 1) fac[fcnt++] = (Factor){n, 1};
}

static void dfs(int idx, ll cur) {
    if (idx == fcnt) {
        divs[dcnt++] = cur;
        return;
    }
    ll mul = 1;
    for (int i = 0; i <= fac[idx].e; i++) {
        dfs(idx + 1, cur * mul);
        mul *= fac[idx].p;
    }
}

static ll calc(ll b, int p) {
    i128 sum = 1, cur = 1;
    for (int i = 1; i < p; i++) {
        cur *= b;
        sum += cur;
        if (sum > LIM) return LIM + 1;
    }
    return (ll)sum;
}

static ll power_cap(ll b, int p, ll limit) {
    i128 ret = 1;
    for (int i = 0; i < p; i++) {
        ret *= b;
        if (ret > limit) return limit + 1;
    }
    return (ll)ret;
}

static bool check(ll n, ll b, int p, ll d) {
    ll y = n / d;
    ll base = power_cap(b, p, y);
    if (base > y) return y < b;
    while (y) {
        if (y % base >= b) return false;
        y /= base;
    }
    return true;
}

static void build_rep() {
    repcnt = 0;
    for (int i = 0; i < HSIZE; i++) head[i] = -1;

    for (int p = 3; p <= 39; p++) {
        for (ll b = 2;; b++) {
            ll v = calc(b, p);
            if (v > LIM) break;
            rep[repcnt].val = v;
            rep[repcnt].b = (int)b;
            rep[repcnt].p = (unsigned char)p;
            int h = bucket(v);
            nxt[repcnt] = head[h];
            head[h] = repcnt;
            repcnt++;
        }
    }
}

int main() {
    sieve();
    build_rep();

    scanf("%d", &t);
    while (t--) {
        ll n, ret = 0;
        scanf("%lld", &n);

        factorize(n);
        dcnt = 0;
        dfs(0, 1);

        for (int i = 0; i < dcnt; i++) {
            ll d = divs[i];

            if (d >= 3) {
                ll b = d - 1;
                if (check(n, b, 2, d)) ret++;
            }

            int h = bucket(d);
            for (int idx = head[h]; idx != -1; idx = nxt[idx]) {
                if (rep[idx].val == d) {
                    if (check(n, rep[idx].b, rep[idx].p, d)) ret++;
                }
            }
        }

        printf("%lld\n", ret);
    }

    return 0;
}