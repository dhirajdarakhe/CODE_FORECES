#include <iostream>
#include <vector>

using namespace std;

const int MOD = 998244353;

// Function to calculate modular exponentiation
int power(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1)
            res = (res * 1LL * x) % MOD;
        x = (x * 1LL * x) % MOD;
        y >>= 1;
    }
    return res;
}

// Function to calculate binomial coefficient
int binomialCoefficient(int x, int y, const vector<int>& factorials, const vector<int>& inverseFactorials) {
    int numerator = factorials[x];
    int denominator = (inverseFactorials[y] * 1LL * inverseFactorials[x - y]) % MOD;
    return (numerator * 1LL * denominator) % MOD;
}

int solve(int n, int a1, int x, int y, int m, int k) {
    vector<int> factorials(n + 1);
    vector<int> inverseFactorials(n + 1);

    factorials[0] = 1;
    inverseFactorials[0] = 1;

    // Pre-calculate factorials and their inverses modulo MOD
    for (int i = 1; i <= n; i++) {
        factorials[i] = (factorials[i - 1] * 1LL * i) % MOD;
        inverseFactorials[i] = power(factorials[i], MOD - 2);
    }

    vector<int> a(n);
    a[0] = a1;

    // Generate the array 'a'
    for (int i = 1; i < n; i++) {
        a[i] = ((a[i - 1] * 1LL * x) + y) % m;
    }

    vector<int> b(n);
    int c = 0;

    b[0] = (power(1, k) * 1LL * a[0]) % MOD;
    c ^= b[0];

    for (int i = 1; i < n; i++) {
        int termSum = 0;
        for (int j = 1; j <= i; j++) {
            int binomial = binomialCoefficient(i - j + 1, j, factorials, inverseFactorials);
            int term = (binomial * 1LL * a[j]) % MOD;
            termSum = (termSum + term) % MOD;
        }

        b[i] = (termSum * 1LL * power(i + 1, k)) % MOD;
        int ci = b[i] * 1LL * (i + 1);
        c ^= ci;
    }

    return c;
}

int main() {
    int n, a1, x, y, m, k;
    cin >> n >> a1 >> x >> y >> m >> k;

    int result = solve(n, a1, x, y, m, k);
    cout << result << endl;

    return 0;
}
