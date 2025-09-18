class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
       vector<int>ans;
       int evenSum=0;
        for(int n:nums) if(n%2==0) evenSum+=n;
        for(int i=0;i<queries.size();i++){
            int val=queries[i][0];
            int idx=queries[i][1];
            if(nums[idx]%2==0) evenSum-=nums[idx];
            nums[idx]=nums[idx]+val;
           if(nums[idx] % 2 == 0) evenSum += nums[idx];
            ans.push_back(evenSum);

        }
        return ans;

        
    }
};