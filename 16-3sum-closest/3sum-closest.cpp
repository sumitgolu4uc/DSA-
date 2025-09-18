class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int val = nums[0] + nums[1] + nums[2]; 

        for(int i = 0; i < n ; i++) {
            int low = i + 1, high = n - 1;
            while(low < high) { 
                int sum = nums[i] + nums[low] + nums[high];
                if(abs(sum - target) < abs(val - target)) {
                    val = sum;
                }
                if(sum < target) low++;
                else high--;
            }
        }
        return val;
    }
};