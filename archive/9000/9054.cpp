#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int n;
vector<int> v;

auto get_divisiors = [](int num) {
    vector<int> ret;
    for(int i = 1; i <= num; i++) if (num % i == 0) ret.push_back(i);
    return ret;
};

auto check = [](int now){
    vector<int> current;
    current.resize(n);
    for(int i = 0; i < n; i++) current[i] = (now * v[i] + n - 1) / n;
    bool chk = 1;
    for(int i = 1; i < n; i++) chk &= current[i] >= current[i - 1];
    return chk;
};

int main() { 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }
    vector<int> res, divs = get_divisiors(n);
    for (auto &x : divs) {
        if (x == 1) continue;
        if (check(x)) res.push_back(x);
    }
    if (sz(res) == 0) printf("-1");
    else for (auto &x : res) printf("%d\n" , x); 
}