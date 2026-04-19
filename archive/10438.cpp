#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
char s[10101];
int main() {
    int n;
    scanf("%d", &n);
    scanf("%s", s);
    int cl = 0, co = 0, l = 0, o = 0;
    for(auto &x : s) {
        if (x == 'L') cl++;
        if (x == 'O') co++;
    }
    for(int k = 1; k < n; k++) {
            if (s[k - 1] == 'L') l++;
            else o++;
            if (2 * l != cl && 2 * o != co) {
                printf("%d", k);
                exit(0);
            }
    }
    printf("-1");
}