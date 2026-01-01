class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        if (n == 0) return ans;

        int left = 0;
        int prev = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == prev + 1) {
                prev = nums[i];
            } else {
                if (nums[left] == prev)
                    ans.push_back(to_string(nums[left]));
                else
                    ans.push_back(to_string(nums[left]) + "->" + to_string(prev));

                left = i;
                prev = nums[i];
            }
        }

     
        if (nums[left] == prev)
            ans.push_back(to_string(nums[left]));
        else
            ans.push_back(to_string(nums[left]) + "->" + to_string(prev));

        return ans;
    }
};
