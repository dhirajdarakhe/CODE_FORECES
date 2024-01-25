#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1003;
ll steps[N];

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n), c(n);
    for (int &x : b)
        cin >> x;
    for (int &x : c)
        cin >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cout << c[i] << " " << b[i] << " "<< steps[b[i]] << endl;
    for (int i = 0; i < n; i++)
        v[i] = steps[b[i]];
    ll ans = knapsack(k, v, c, n);
    printf("%lld", ans);
    printf("\n");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    fill(steps, steps + N, N);
    steps[1] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int curr = i + i / j;
            if (curr < N)
                steps[curr] = min(steps[curr], steps[i] + 1);
        }
    }
    ll t;
    cin >> t;
    while (t--)
        solve();
}