#include <stdio.h>
typedef long long ll;

ll dp[46];

int main() {
    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= 45; i++) dp[i] = dp[i - 1] + dp[i - 2];
    int n;
    scanf("%d", &n);
    printf("%lld %lld", dp[n - 1], dp[n]);
}