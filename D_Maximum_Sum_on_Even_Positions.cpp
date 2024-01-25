

// Time Complexity: O(N log(N)),
// Auxiliary Space: O(n),
// for more info https://www.geeksforgeeks.org/merge-sort/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ans;
void merge_sort(vector<int> &v, vector<int> &temp, int low, int mid, int high)
{
    int i = low;
    int j = mid;
    int k = low;
    while (i <= mid - 1 && j <= high)
    {
        if (v[i] < v[j])
        {
            temp[k++] = v[i++];
        }
        else
        {
            ans++;
            temp[k++] = v[j++];
        }
    }
    while (i <= mid - 1)
        temp[k++] = v[i++];
    while (j <= high)
        temp[k++] = v[j++];
    for (int l = low; l <= high; ++l)
        v[l] = temp[l];
}
void merge(vector<int> &v, vector<int> &temp, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge(v, temp, low, mid);
    merge(v, temp, mid + 1, high);
    merge_sort(v, temp, low, mid + 1, high);
}
int main()
{
    vector<int> v = {2, 1, 3};
    int n = v.size();
    vector<int> temp(n);
    ans = 0;
    merge(v, temp, 0, n - 1);
    cout << ans;
    return 0;
}
