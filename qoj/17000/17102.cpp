#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    vector<int>want={1,1,2,2,2,8};
    for(int i=0;i<6;i++){
        int x;
        cin>>x;
        cout<<want[i]-x<<' ';
    }
}