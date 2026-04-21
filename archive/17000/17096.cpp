#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

vector<int> pointx, pointy;
int x,y;

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    // xor likes points
    for(int i=0;i<3;i++){
        cin>>x>>y;
        pointx.push_back(x);
        pointy.push_back(y);
    }
    int fx = pointx[0] ^ pointx[1] ^ pointx[2];
    int fy = pointy[0] ^ pointy[1] ^ pointy[2];
    cout << fx << ' ' << fy;
}