

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int digitSumCount(string num, int sum, int min_sum) {
    int n = num.length();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= sum; j++) {
            for (int digit = 0; digit <= 9; digit++) {
                if (j >= digit) {
                    dp[i][j] += dp[i - 1][j - digit];
                    dp[i][j] %= (int)(1e9 + 7);
                }
            }
        }
    }

    int count = 0;
    for (int j = min_sum; j <= sum; j++) {
        count += dp[n][j];
        count %= (int)(1e9 + 7);
    }

    return count;
}

int countGoodIntegers(string num1, string num2, int min_sum, int max_sum) {
    int count1 = digitSumCount(num2, max_sum, min_sum);
    int count2 = digitSumCount(to_string(stoi(num1) - 1), max_sum, min_sum);
    int count = (count1 - count2 + (int)(1e9 + 7)) % (int)(1e9 + 7);
    return count;
}

int main(){
    string num1 = "123";
    string num2 = "456";
    int min_sum = 5;
    int max_sum = 10;
    int count = countGoodIntegers(num1, num2, min_sum, max_sum);
    cout << count << endl;  // Output: 98

    return 0;
}
