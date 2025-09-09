class Solution {
public:
 int solve(int n,vector<int>&memo){
    if(n<2) return 1;
    if(memo[n]!=-1) return memo[n];
    int total=0;
    for(int i=1;i<=n;i++){
        int left=solve(i-1,memo);
        int right=solve(n-i,memo);
        total+=left*right;
    }
    memo[n]=total;
    return total;
 }
    int numTrees(int n) {
        vector<int>memo(n+1,-1);
        return solve(n,memo);
        
        
    }
};