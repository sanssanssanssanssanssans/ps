#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

char s[303030];
int res, current, sum[10], k;

int main() { 
    scanf("%s", s);
    for(int i = 0; s[i] != '\0'; i++) {
        current = s[i] - 'A' + 1;
        k = 1234567890;
        sum[current] ++;
        k = min(k, sum[1]);
        k = min(k, sum[2]);
        k = min(k, sum[3]);
        sum[1] -= k;
        sum[2] -= k;
        sum[3] -= k;
        res = max(res, sum[1]);
        res = max(res, sum[2]);
        res = max(res, sum[3]);
    }
    printf("%d", res);
}