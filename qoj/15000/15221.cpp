#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    vector<array<int,3>> v;
    for (int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y,i+1});
    }
    sort(all(v));
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<>
    > pq;
    vector<int> result;
    int i =0;
    for (int k=0;k<n;k++){
        while(i<n && v[i][0]<=k)pq.emplace(v[i][1], v[i][2]), ++i;
        while(!pq.empty() && pq.top().first<k) pq.pop();
        if(pq.empty()) break;
        result.push_back(pq.top().second);
        pq.pop();
    }
    cout<<sz(result)<<'\n';
    for(auto&x:result)cout<<x<<' ';
}