#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX
// int A[8][8] =        {{I, I, I, I, I, I, I, I},
//                      {I, I, 25, I, I, I, 5, I},
//                      {I, 25, I, 12, I, I, I, I},
//                      {I, I, 12, I, 8, I, I, I},
//                      {I, I, I, 8, I, 16, I, 14},
//                      {I, I, I, I, 16, I, 20, 18},
//                      {I, 5, I, I, I, 20, I, I},
//                      {I, I, I, I, 14, 18, I, I}};
int A[8][8] = {
    {I, I, I, I, I, I, I, I},
    {I, I, I, I, I, I, I, I},
    {I, I, I, I, I, I, I, I},
    {I, I, I, I, I, I, I, I},
    {I, I, I, I, I, I, I, I},
    {I, I, I, I, I, I, I, I},
    {I, I, I, I, I, I, I, I},
    {I, I, I, I, I, I, I, I}};
int near[8] = {I, I, I, I, I, I, I, I};
int t[2][8];
int main()
{
    cout << "Enter the number of vertex\n";
    int n1;
    cin >> n1;
    cout << "Enter number of edge  m\n";
    int edge;
    cin >> edge;
    for (int d = 0; d < edge; d++)
    {
        int u1, v1, w1;
        cout << "Enter the vertex u and u with their weight\n";
        cout << " u1 : ";
        cin >> u1;
        cout << " v1 : ";
        cin >> v1;
        cout << " w1 : ";
        cin >> w1;
        A[u1][v1] = w1;
        A[v1][u1] = w1;
    }
    int i, j, k, v, u, n = 7, min = I;
    for (i = 1; i <= n; ++i)
    {
        for (j = i; j <= n; ++j)
        {
            //            mn = min(A[i][j], mn);
            // cout<<A[i][j]<<" ";
            if (A[i][j] < min)
            {
                min = A[i][j];
                u = i;
                v = j;
                // cout<<A[i][j]<<" ";
            }
        }
        cout << "\n";
    }
    t[0][0] = u;
    t[1][0] = v;
    //    cout<<u<<" "<<v;cout<<A[i][j]<<" ";
    near[u] = near[v] = 0;
    for (i = 1; i <= n; ++i)
    {
        if (near[i] != 0)
        {
            if (A[i][u] < A[i][v])
            {
                near[i] = u;
            }
            else
            {
                near[i] = v;
            }
        }
    }
    for (i = 1; i < n - 1; i++)
    {
        min = I;
        for (j = 1; j <= n; ++j)
        {
            if (near[j] != 0 && min > A[j][near[j]])
            {
                min = A[j][near[j]];
                k = j;
            }
        }

        t[0][i] = k;
        t[1][i] = near[k];
        near[k] = 0;
        //  cout<<k<<" "<<near[k];
        for (j = 1; j <= n; ++j)
        {
            if (near[j] != 0 && A[j][k] < A[j][near[j]])
            {
                near[j] = k;
            }
        }
    }
    for (i = 0; i < 6; ++i)
    {
        cout << " | " << t[0][i];
    }
    cout << " | ";
    cout << "\n";
    for (i = 0; i < 6; ++i)
    {
        cout << " | " << t[1][i];
    }
    cout << " | ";
    return 0;
}