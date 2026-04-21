#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    cin >> s;
    string suffix = s.substr(sz(s) - 12, 12);
    if(suffix == "isallyouneed"){
        cout << "Yes" << '\n' << s.substr(0, sz(s) - 12) << '\n';
        exit(0);
    }
    cout << "No";
}