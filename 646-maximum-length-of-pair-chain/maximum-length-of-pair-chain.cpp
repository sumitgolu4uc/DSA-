class Solution {
public:
 int n;
   int dp[2501][2501];
   int solve(vector<vector<int>>& nums,int i,int p){
    if(i>=n) return 0;
    if(p!=-1&&dp[i][p]!=-1) return dp[i][p];
    int take=0;
    if(p==-1||nums[p][1]<nums[i][0]) take=1+solve(nums,i+1,i);
    int skip=solve(nums,i+1,p);
    if(p!=-1) dp[i][p]=max(take,skip);
    return max(take,skip);
   }
    int findLongestChain(vector<vector<int>>& pairs) {
      n=pairs.size();
      sort(pairs.begin(),pairs.end());
      memset(dp,-1,sizeof(dp));
      return solve(pairs,0,-1);
    }
};