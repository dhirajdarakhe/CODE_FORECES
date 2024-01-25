#include <bits/stdc++.h>
using namespace std;
#define I INT_MAX
int A[8][8] =
{   {I, I, I, I, I, I, I, I},
    {I, I, 25, I, I, I, 5, I},
    {I, 25, I, 12, I, I, I, I},
    {I, I, 12, I, 8, I, I, I},
    {I, I, I, 8, I, 16, I, 14},
    {I, I, I, I, 16, I, 20, 18},
    {I, 5, I, I, I, 20, I, I},
    {I, I, I, I, 14, 18, I, I}
};
int near[8] = {I, I, I, I, I, I, I, I};

int main()
{int t[2][7];
    int i, j, k, v, u, n = 7, min = I;
    for (i = 1; i <= n; ++i)
    {
        for (j = i; j <= n; ++j)
        {
            if (A[i][j] < min)
            {
                min = A[i][j];
                u = i;
                v = j;
            }
        }
    }
    t[0][0] = u;
    t[1][0] = v;
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
    for (int i = 0; i < 8; ++i)
    {
       cout<<" "<<near[i];
    }
    for (i = 1; i < n - 1; i++)
    {   
        min = I;
        for (j = 1; j <= n; ++j) {
            if (near[i] != 0 &&  A[j][near[j]] < min) {
                k = j; 
                min = A[j][near[j]];
            }
        }
        t[0][i] = k;
        t[1][i] = near[k];
        near[k] = 0;cout<<"Dhirak";
        for (j = 1; j <= n; ++j){
            if (near[j] != 0 && A[j][k] < A[j][near[j]]) {
                near[j] = k;
            }
        }
    }
   
    for (i = 0; i < n-1; ++i) {
        cout << t[0][i] << " " << t[1][i] << " ";
    }
    return 0;
}