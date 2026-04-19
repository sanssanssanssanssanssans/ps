#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int n, s, l, r;

int main() { 
    scanf("%d %d", &n, &s);
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &l, &r);
        if (l <= s && s <= r) s++;
    }
    printf("%d", s);
}