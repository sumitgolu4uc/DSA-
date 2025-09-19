class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixSum(n, 0);
        prefixSum[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            ans[i]=(nums[i]*i)-(prefixSum[i]-nums[i])+(prefixSum[n-1]-prefixSum[i])-(nums[i]*(n-i-1));
        }
        return ans;
    }
};