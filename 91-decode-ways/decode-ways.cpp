class Solution {
public:
int solve(string&s,int idx,vector<int>&dp){
    if(s[idx]=='0') return 0;
    if(idx==s.size()) return 1;
    if(dp[idx]!=-1) return dp[idx];
    int ways=0;
    ways+=solve(s,idx+1,dp);
    if(idx+1<s.size()){
        int two=(s[idx]-'0')*10+(s[idx+1]-'0');
        if(two>=10&&two<=26) {
            ways+=solve(s,idx+2,dp);
        }
    }
    return dp[idx]=ways;
}
    int numDecodings(string s) {
        vector<int>dp(s.size(),-1);
        return solve(s,0,dp);
    }
};