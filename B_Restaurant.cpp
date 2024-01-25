using namespace std;
int main()
{
    int v[10000] = {0}, n, t, k, q = 0, u = 0, h, i, j;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> k;
        if (k > q)
            q = k;
        v[k]++;
    }
    cin >> t;
    for (j = 1; j <= q; j++)
    {
        for (i = j, h = 0; i <= t + j && i <= q; i++)
            h += v[i];
        if (h > u)
            u = h;
    }
    cout << u;
}
