
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
const ll N = 1e5 + 7;
vector<ll> ans;
vector< vector<ll>> ans2;
bool visi[N];
vector<ll> g[N];
void dfs(ll source) {
    ans.push_back(source);
    visi[source] = true;
    for (auto child : g[source]) {
        if (visi[child]) continue;
        dfs(child);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    cout << "Done\n";
    forsn(i, 1, 9) {
        if (visi[i])continue;
        dfs(i);
        ans2.push_back(ans);
        ans.clear();
        // cout << endl;
    }
    cout<<ans2.size()<<endl;
    for(auto x : ans2){
        for(auto xx : x){
            cout<<xx<<" ";
        }cout<<endl;
    }
    return 0;
}
// INPUT
// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7

// OUTOUT
// 3
// 1 2 3 5 4
// 6 7
// 8