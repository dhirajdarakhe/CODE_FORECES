#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int count_numbers(int n, vector<int> &factors)
{
    map<int, int> factor_counts;
    for (int i = 0; i < 2 * n; i++)
    {
        factor_counts[factors[i]]++;
    }

    vector<int> primes;
    for (auto it = factor_counts.begin(); it != factor_counts.end(); it++)
    {
        primes.push_back(it->first);
    }
    sort(primes.begin(), primes.end());

    vector<int> max_exponents;
    for (int i = 0; i < primes.size(); i++)
    {
        max_exponents.push_back(factor_counts[primes[i]]);
    }

    int count = 0;
    for (int i = 0; i < primes.size(); i++)
    {
        vector<int> exponents(primes.size(), 0);
        for (int j = i; j < primes.size(); j++)
        {
            for (int k = 0; k <= max_exponents[j]; k++)
            {
                exponents[j] = k;
                if (j == primes.size() - 1)
                {
                    int num = 1;
                    for (int l = 0; l < primes.size(); l++)
                    {
                        num *= pow(primes[l], exponents[l]);
                    }
                    if (num > 0)
                    {
                        count++;
                        count %= MOD;
                    }
                }
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> factors(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> factors[i];
    }
    cout << count_numbers(n, factors) << endl;
    return 0;
}
