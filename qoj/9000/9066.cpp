#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

// n <= 3이고, n개의 정수가 주어진다.
// 아마도 경우의 수 세면 될거 같은데

// n == 1
// 60? 156이고
// n == 2면 일단 all same 돌렸으면 true == 0 36 아니면 
// 12 24임
// n == 3 이면 all same 0 6 아니면 3 3

auto check_one_same = [](vector<int> v) -> bool {
    for (int i = 0; i < sz(v); i++) for(int j = i + 1; j < sz(v); j++) if (v[i] == v[j]) return true;
    return false;
};

int n, x;
vector<int> v;

int main() { 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }
    if (n == 1) {
        printf("60 156");
        exit(0);
    } else if (n == 2) {
        if (check_one_same(v)) {
            printf("0 36");
            exit(0);
        } else {
            printf("12 24");
            exit(0);
        }
    } else if (n == 3) {
        if (check_one_same(v)) {
            printf("0 6");
            exit(0);
        } else {
            printf("3 3");
            exit(0);
        }
    }
}