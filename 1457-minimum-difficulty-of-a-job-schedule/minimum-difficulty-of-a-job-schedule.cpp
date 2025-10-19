class Solution {
public:
int dp[301][11];
int solve(int idx,vector<int>&jd,int d,int n){
    if(d==1){
        int maxD=jd[idx];
        for(int i=idx;i<n;i++){
            maxD=max(maxD,jd[i]);
        }
        return maxD;
    }
    if(dp[idx][d]!=-1) return dp[idx][d];
    int maxD=INT_MIN;
    int final_result=INT_MAX;
    for(int i=idx;i<=n-d;i++){
         maxD=max(maxD,jd[i]);
       int res=maxD+solve(i+1,jd,d-1,n);
        final_result=min(res,final_result);
    }
    return dp[idx][d]=final_result;

}
    int minDifficulty(vector<int>& jd, int d) {
        int n=jd.size();
        if(n<d) return -1;
        memset(dp,-1,sizeof(dp));

       return solve(0,jd,d,n);
        

    }
};