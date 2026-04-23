#include <stdio.h>
typedef long long ll;

ll n,s,a[2020202];

int main() {
    scanf("%lld %lld", &n, &s);
    for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
    ll left = 1, right = n, turn = n % 2;
    while (left <= right) {
        if (turn == 1) s = 2 * a[right--] - s;
        else s = 2 * a[left++] - s;
        turn = !turn;
    }
    printf("%lld", s);
}