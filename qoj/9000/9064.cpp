#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int n, d, p[101010], ret, i, j;

int main() {    
    scanf("%d %d", &n, &d);
    for(int i = 0; i < n; i++) scanf("%d", &p[i]);
    sort(p, p + n);
    while (i < n) {
        while (j < n && p[j] - p[i] <= d) j++;
        i = j;
        ret ++;
    }
    printf("%d", ret);
}