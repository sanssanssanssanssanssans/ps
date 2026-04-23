#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

auto get_7 = [](vector<int> nums) {
    for (auto &x : nums) if (x  == 7)  return true;
    return false;
};

int n, t = 3, x, cnt = 0;;
vector<int> v;

int main() { 
    scanf("%d", &n);
    while (t--) {
        v.clear();
        for(int i = 0; i < n; i++) {
            scanf("%d", &x);
            v.push_back(x);
        }
        if (get_7(v)) cnt++;
    }
    if (cnt == 3) printf("777");
    else printf("0");
}