class Solution {
public:
    long long solve(vector<int>& nums, vector<vector<long long>>& dp, int idx, bool add) {
        if(idx >= nums.size()) return 0;
        if(dp[idx][add] != -1) return dp[idx][add];
        long long take = (add ? nums[idx] : -nums[idx]) + solve(nums, dp, idx + 1, !add);
        long long skip = solve(nums, dp, idx + 1, add);
        return dp[idx][add] = max(take, skip);
    }

    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<long long>> dp(n, vector<long long>(2, -1));
        return solve(nums, dp, 0, true);
    }
};