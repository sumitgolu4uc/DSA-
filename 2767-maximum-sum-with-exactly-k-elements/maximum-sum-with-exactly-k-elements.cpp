class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(k--){
            ans+=nums[n];
            nums[n]++;
        }
        return ans;
        
    }
};