#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> minTime(vector<int> start, vector<int> end, vector<int> q_start, vector<int> q_end, int K)
{
    vector<int> minTime(q_start.size(), 0);
    int mx = *max_element(end.begin(), end.end());
    vector<int> res(mx + 10, 0);
    for (int i : start)
        res[i]++;
    for (int i : end)
        res[i + 1]--;
    for (int i = 1; i < res.size(); ++i)
        res[i] += res[i - 1];
    for (int i = 0; i < q_start.size(); ++i)
    {
        int ans = 0;
        for (int j = q_start[i]; j <= q_end[i]; ++j)
        {
            if (res[j] <= K)
                ans++;
        }
        minTime[i] = ans;
    }
    return minTime;
}

int main()
{
    vector<int> start = {1, 2, 4};
    vector<int> end = {3, 4, 5};
    vector<int> q_start = {2};
    vector<int> q_end = {6};
    int k = 1;
    cout << minTime(start, end, q_start, q_end, k);
}
