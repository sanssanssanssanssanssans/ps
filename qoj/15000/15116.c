    #include <stdio.h>
    typedef long long ll;

    ll max(ll a, ll b) {
        if (a > b) return a;
        return b;
    }

    ll dp[2020202];

    int main() {
        int t;
        scanf("%d", &t);
        while (t--) {
            ll n, m;
            scanf("%lld %lld", &n, &m);
            // dp[0] = 0;
            for (int i = 0; i <= n; i++) dp[i] = 0;
            dp[0] = 0;
            for (int i = 1; i <= m; i++) {
                ll a, b, v;
                scanf("%lld %lld %lld", &a, &b, &v);
                ll tmp = dp[a];
                dp[a] = dp[b] + v;
                dp[b] = tmp + v;
            }
            ll answer = -123456789;
            for (int i = 1; i <= n; i++) answer = max(answer, dp[i]);
            printf("%lld\n", answer);
        }
    }