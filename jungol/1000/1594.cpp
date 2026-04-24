#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float long double
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define trav(x, v) for(auto&x : v)
using pii = pair<int,int>;
using vi = vector<int>;
const float pi = acos(-1);
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void naive() {}
void stress() {}
void init(){}
void solve(){
    static int arr[101][101];
    int t = 4;
    while(t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int i=a;i<c;i++)for(int j=b;j<d;j++)arr[i][j]=1;
    }
    int sum=0;
    for(int i=0;i<101;i++)for(int j=0;j<101;j++)sum+=arr[i][j];
    cout<<sum;
}

signed main() { 
    cin.tie(0) -> sync_with_stdio(0);
    init();
    int t=1;
    // cin >> t;
    while(t--)solve();
}