#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int n;
vector<int> v = {1, 12, 123, 1234, 12345, 123456, 1234567, 12345678, 123456789};

int find_number(int target) {
    int idx = -1, i = 0;
    for (auto &x : v) {
        if (x == target) {
            idx = i;
            break;
        }
        i++;
    }
    return idx;
}

int main() { 
    scanf("%d", &n);
    if (find_number(n) == -1) printf("-1");
    else printf("%d", find_number(n) + 1);
}