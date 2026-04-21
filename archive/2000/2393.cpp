#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    ll n;
    cin >> n;
    string s = to_string(n);
    vector<int> nice(10, 1);
    for (auto&ch:s)nice[ch-'0'] = 0;
    vector<int>dig;
    for(int i=0;i<10;i++)if(nice[i])dig.push_back(i);
    vector<ll> cand;
    for(int d=0;d<18;d++){
        for(auto&g:dig){
            for(auto&h:dig){
                string t=to_string(g)+string(d,char('0'+h));
                cand.push_back(stoll(t));
            }
        }
    }
    if(sz(cand)==0){
        cout<<"Impossible";
        return 0;
    }
    ll best = LLONG_MAX;
    for (auto&e:cand)best=min(best,llabs(e-n));
    set<ll>value;
    for(auto&e:cand)if(llabs(e-n)==best)value.insert(e);
    for(auto&v:value)cout<<v<<' ';
}