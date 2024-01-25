class Solution
{
public:
    int f(vector<int> &nums1, vector<int> &nums2, int i, int j, int n1, int n2, vector<vector<int>> &dp)
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        int ans = max(
            {(j + 1 >= n2 || i + 1 >= n1 || f(nums1, nums2, i + 1, j + 1, n1, n2, dp) < 0) ? (nums1[i] * nums2[j]) : f(nums1, nums2, i + 1, j + 1, n1, n2, dp) + (nums1[i] * nums2[j]),
             (j + 1 < n2) ? f(nums1, nums2, i, j + 1, n1, n2, dp) : INT_MIN,
             (i + 1 < n1) ? f(nums1, nums2, i + 1, j, n1, n2, dp) : INT_MIN,
             (j + 1 < n2 && i + 1 < n1) ? f(nums1, nums2, i + 1, j + 1, n1, n2, dp) : INT_MIN});
        return dp[i][j] = ans;
    }
    int maxDotProduct(vector<int> &nums1, vector<int> &nums2)
    {
        vector<vector<int>> dp(nums1.size() + 10, vector<int>(nums2.size() + 10, -1));
        return f(nums1, nums2, 0, 0, nums1.size(), nums2.size(), dp);
    }
};