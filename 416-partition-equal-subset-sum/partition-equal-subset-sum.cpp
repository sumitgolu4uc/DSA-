class Solution {
public:
   bool solve(int i,int sum,vector<int>&nums,int total,vector<vector<int>>&dp){
      if(i==nums.size()){
        return sum==(total/2);
      }
      if(dp[i][sum]!=-1) return dp[i][sum];
      bool noteTake=solve(i+1,sum,nums,total,dp);
      bool take=solve(i+1,sum+nums[i],nums,total,dp);

       return dp[i][sum]= noteTake||take;
   }
    bool canPartition(vector<int>& nums) {
        int total=0;
        for(int n:nums) total+=n;
        if(total%2!=0) return false;
        vector<vector<int>>dp(nums.size()+1,vector<int>(total,-1));
        return solve(0,0,nums,total,dp);
    }
};