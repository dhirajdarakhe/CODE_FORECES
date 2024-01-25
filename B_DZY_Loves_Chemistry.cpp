#define ll long long int
class Solution {
public:
    
    
    
const ll N = 1e5 + 7;
vector<pair<ll, ll>> graph[N];

void DIJKSTRA(ll start, ll n)
{
  priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq; // syntax of pq to acesnding order pair 
  vector<ll> dis(n + 1, INT_MAX);
  dis[start] = 0;
  pq.push({0, start});
  while (!pq.empty())
  {
    ll dist = pq.top().first;
    ll node = pq.top().second;
    pq.pop();
    for (auto childwt : graph[node])
    {
      ll wt = childwt.second;
      ll child = childwt.first;
      if (wt + dist < dis[child])
      {
        dis[child] = wt + dist;
        pq.push({wt + dist, child});
      }
    }
  }
  for (int i = 0 ; i < n; ++i) {
    cout << dis[i] << " ";
  }
}

    int minimumTotalPrice(int n, vector<vector<int>>& edges, vector<int>& price, vector<vector<int>>& trips) {
          for (ll i = 0; i < e; ++i)
  {
    int v1, v2, wt;
    cin >> v1 >> v2 >> wt;
    graph[v1].push_back({v2, wt});
    graph[v2].push_back({v1, wt});
  }
    }
};