#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(int a, int b, int c, int sub, int div)
{
    int d = (b * b ) - (4 * a * c);
    if (d < 0) {
        cout << -1 << " " << -1 << endl;
        return;
    }
    int ans1, ans2;
    ll sqrt_val = sqrt(abs(d));
    cout<< d << "  " << sqrt_val <<endl;
    if (d > 0) {
        ans1 =  (ll)(-b + sqrt_val) / (2 * a);
        ans2 =  (ll)(-b - sqrt_val) / (2 * a);
    }
    cout << " -> " << ans1 <<  " ->" << ans2 << endl;
    if ((abs(ans2 - ans1) == abs(sub) && ans2 / ans1 == div) || (abs(ans2 - ans1) == abs(div) && ans2 / ans1 == sub) ) {
        cout << ans2 << " " << ans1 << endl;
    }
    else if ((abs(ans2 - ans1 ) == abs(sub) && ans1 / ans2 == div) || (abs(ans2 - ans1) == abs(div) && ans1 / ans2 == sub) ) {
        cout << ans1 << " " << ans2 << endl;
    }

    else {
        cout << -1 << " " << -1 << endl;
    }
}

int main()
{
    int t = 0;
    cin >> t ;
    while (t--) {
        vector<int> v(4);
        for (int i = 0; i < 4; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int a = 1, b = -v[2], c = v[3];
        solve(a, b, c, v[0], v[1]);
    }
    return 0;
}


